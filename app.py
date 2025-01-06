from utils.log.logger import Logger
from utils.config.reader import ConfigReader
from utils.aal_utils.read_annotation import AnnotationReader
from utils.aal_utils.extract_annotation import AnnotationExtractor
from utils.json_utils.json_utils import JsonUtils
from utils.aal_utils.extract_source import SourceExtractor
import os
import logging

_config = ConfigReader().get_config()
logger = Logger(_config)
annotation_reader = AnnotationReader(_config)
alarm_extractor = AnnotationExtractor(_config)
json_utils = JsonUtils(_config)
source_extractor = SourceExtractor(_config)

def get_alarm_data(alarms):
    # This function will extract alarm data(position, comment, class, type) from annotation
    for alarm in alarms:
        annotation = alarms[alarm]['data']
        alarm_data = alarm_extractor.extract(annotation)
        if alarm_data is None:
            continue
        # Merge 2 dictionaries
        for key, value in alarm_data.items():
            alarms[alarm][key] = value
    return alarms

def get_alarm_source(alarms, parent_dir):
    try:
        # This function will extract alarm source from source file
        for alarm in alarms:
            alarm_data = alarms[alarm]
            alarm_source = source_extractor.get_alarm_source(alarm_data, parent_dir)
            alarms[alarm]['alarm_source'] = alarm_source
        return alarms
    except Exception as e:
        logging.error("Main", f"Error getting alarm source: {e}")
        # return None
        raise

######################## Merge Souce -> Target ########################
logging.info('################################ Linking AAL Souce -> Target ################################', '')
# Check and create output folder
logging.info('Main', 'Checking output folder')
if not os.path.exists(_config['output_folder']):
    logging.info('Main', 'Creating output folder')
    os.makedirs(_config['output_folder'])

base_path_source = r'C:\Users\trand\Desktop\Bosch\astree_annotation_link\resource\adapt_aal\adapt_aal\USS_1710'
aal_path_source = os.path.join(base_path_source, 'annotation.aal')
base_path_target = r'C:\Users\trand\Desktop\Bosch\astree_annotation_link\resource\adapt_aal\adapt_aal\USS_1810'
aal_path_target = os.path.join(base_path_target, 'annotation.aal')
logging.info('Main', f'Source path: {base_path_source}')
logging.info('Main', f'Target path: {base_path_target}')
logging.info('Main', f'Source AAL path: {aal_path_source}')
logging.info('Main', f'Target AAL path: {aal_path_target}')

logging.info('################################ Reading AAL files ################################', '')
logging.info('Main', 'Reading source annotation file ...')
alarms_source = annotation_reader.read_annotation(aal_path_source)
logging.info('Main', 'Reading source annotation file finished')
logging.info('Main', 'Reading target annotation file ...')
alarms_target = annotation_reader.read_annotation(aal_path_target)
logging.info('Main', 'Reading target annotation file finished')

logging.info('################################ Extracting alarm data ################################', '')
# Extract source alarm data
logging.info('Main', 'Extracting source alarm data ...')
alarms_source = get_alarm_data(alarms_source)
logging.info('Main', 'Extracting source alarm data finished')
logging.info('Main', 'Extracting source alarm source code ...')
alarms_source = get_alarm_source(alarms_source, base_path_source)
logging.info('Main', 'Extracting source alarm source code finished')
output_source_alarm_data_file = os.path.join(_config['output_folder'], base_path_source.split(os.sep)[-1] + '_alarm.json')
json_utils.save(output_source_alarm_data_file, alarms_source)
logging.info('Main', f'Source alarm data saved to {output_source_alarm_data_file}')
# Extract target alarm data
logging.info('Main', 'Extracting target alarm data ...')
alarms_target = get_alarm_data(alarms_target)
logging.info('Main', 'Extracting target alarm data finished')
logging.info('Main', 'Extracting target alarm source code ...')
alarms_target = get_alarm_source(alarms_target, base_path_target)
logging.info('Main', 'Extracting target alarm source code finished')
output_target_alarm_data_file = os.path.join(_config['output_folder'], base_path_target.split(os.sep)[-1] + '_alarm.json')
json_utils.save(output_target_alarm_data_file, alarms_target)
logging.info('Main', f'Target alarm data saved to {output_target_alarm_data_file}')

logging.info('################################ Linking AAL ################################', '')
# Link alarm
from utils.aal_utils.link_annotation import AnnotationLinker
linker = AnnotationLinker(_config, alarms_source, alarms_target)
logging.info('Main', 'Linking annotations ...')
linked_alarm_r, linked_alarm_c = linker.link()
logging.info('Main', 'Linking annotations finished')

# Construct AAL
from utils.aal_utils.aal_constructor import AalConstructor
aal_constructor = AalConstructor(_config)
linked_alarm_r_file_path = os.path.join(_config['output_folder'], base_path_target.split(os.sep)[-1] + 'linked_alarm_r.aal')
linked_alarm_c_file_path = os.path.join(_config['output_folder'], base_path_target.split(os.sep)[-1] + 'linked_alarm_c.aal')
aal_constructor.construct(linked_alarm_r, linked_alarm_r_file_path)
aal_constructor.construct(linked_alarm_c, linked_alarm_c_file_path)
