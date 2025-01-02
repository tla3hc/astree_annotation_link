from utils.log.logger import Logger
from utils.config.reader import ConfigReader
from utils.aal_utils.read_annotation import AnnotationReader
from utils.aal_utils.extract_annotation import AnnotationExtractor
from utils.json_utils.json_utils import JsonUtils
from utils.aal_utils.extract_source import SourceExtractor

aal_path = r'C:\Users\trand\Desktop\PJ_A\adapt_aal\resource\adapt_aal\adapt_aal\USS_1710\annotation.aal'
source_path = r'C:\Users\trand\Desktop\PJ_A\adapt_aal\resource\adapt_aal\adapt_aal\USS_1710\preprocessed\drive_C\MySandboxes\Prodserver\USS\C08_1710_V1\30_CG\CG_USS\20_IMPL\SW_USS\src\USSDB.c'

_config = ConfigReader().get_config()
logger = Logger(_config)
annotation_reader = AnnotationReader(_config)
alarms = annotation_reader.read_annotation(aal_path)
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

def get_alarm_source(alarms, source_file_path):
    try:
        needed_key = ['alarm_start_line', 'alarm_end_line', 'alarm_start_col', 'alarm_end_col']
        # This function will extract alarm source from source file
        for alarm in alarms:
            alarm_data = alarms[alarm]
            if not all(key in alarm_data for key in needed_key):
                continue
            # source_file_path = alarm_data['file']
            alarm_start_line = alarm_data['alarm_start_line']
            alarm_end_line = alarm_data['alarm_end_line']
            alarm_start_col = alarm_data['alarm_start_col']
            alarm_end_col = alarm_data['alarm_end_col']
            alarm_source = source_extractor.get_alarm_source(source_file_path, alarm_start_line, alarm_end_line, alarm_start_col, alarm_end_col)
            alarms[alarm]['alarm_source'] = alarm_source
    except Exception as e:
        logger.error(f"Error getting alarm source: {e}")
        # return None

# get_alarm_data(alarms)
# # json_utils.save('uss_1710_alarm_pre.json', alarms)
# get_alarm_source(alarms, source_path)
# # save to json
# json_utils.save('uss_1710_alarm.json', alarms)

from utils.aal_utils.link_annotation import AnnotationLinker
old_annotation = json_utils.load_json(r'C:\Users\trand\Desktop\PJ_A\adapt_aal\uss_1710_alarm.json')
new_annotation = json_utils.load_json(r'C:\Users\trand\Desktop\PJ_A\adapt_aal\uss_1810_alarm.json')
linker = AnnotationLinker(_config, old_annotation, new_annotation)
linked = linker.link()
json_utils.save('linked.json', linked)
