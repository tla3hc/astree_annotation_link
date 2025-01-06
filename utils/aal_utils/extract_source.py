import os
import logging
from utils.aal_utils.find_source_file import SourceFileFinder

class SourceExtractor:
    m_class_name = "SourceExtractor"
    m_config = {}
    m_source_file_finder = None
    
    def __init__(self, config):
        logging.info(self.m_class_name, 'Init')
        self.m_config = config
        self.m_source_file_finder = SourceFileFinder(self.m_config)
    
    def read_source_file(self, file_path):
        logging.debug(self.m_class_name, "Reading source file")
        if os.path.isfile(file_path):
            with open(file_path, 'r') as file:
                sources = file.readlines()
        else:
            logging.error(self.m_class_name, "Source file not found")
        return sources
    
    def _get_alarm_source(self, source_file_path, alarm_start_line, alarm_end_line, alarm_start_col, alarm_end_col):
        try:
            logging.debug(self.m_class_name, "Getting alarm source")
            alarm_source = ""
            c_source = self.read_source_file(source_file_path)
            for line in range(alarm_start_line, alarm_end_line+1):
                if line == alarm_start_line:
                    alarm_source += c_source[line-1][alarm_start_col:]
                elif line == alarm_end_line:
                    if not alarm_end_col:
                        alarm_end_col = len(c_source[line-1])
                    alarm_source += c_source[line-1][:alarm_end_col]
                else:
                    alarm_source += c_source[line-1]
            return alarm_source
        except Exception as e:
            logging.error(self.m_class_name, f"Error getting alarm source: {e}")
            return None
    
    def get_alarm_source(self, alarm, parent_dir):
        try:
            needed_key = ['alarm_start_line', 'alarm_end_line', 'alarm_start_col', 'alarm_end_col', 'alarm_file_pos']
            # This function will extract alarm source from source file
            if not all(key in alarm for key in needed_key):
                logging.error(self.m_class_name, "Missing key in alarm data")
                logging.error(self.m_class_name, f"Skip alarm: {alarm}")
                return None
            if not parent_dir or not os.path.isdir(parent_dir):
                logging.error(self.m_class_name, "Invalid parent directory")
                return None
            alarm_start_line = alarm['alarm_start_line']
            alarm_end_line = alarm['alarm_end_line']
            alarm_start_col = alarm['alarm_start_col']
            alarm_end_col = alarm['alarm_end_col']
            alarm_file_pos = alarm['alarm_file_pos']
            source_file_path = self.m_source_file_finder.find_source_file(alarm_file_pos, parent_dir)
            logging.debug(self.m_class_name, f"Source file path: {source_file_path}")
            alarm_source = self._get_alarm_source(source_file_path, alarm_start_line, alarm_end_line, alarm_start_col, alarm_end_col)
            return alarm_source
        except Exception as e:
            logging.error(self.m_class_name, f"Error getting alarm source: {e}")
            return None