import os
import logging

class SourceExtractor:
    m_class_name = "SourceExtractor"
    m_config = {}
    
    def __init__(self, config):
        logging.info(self.m_class_name, 'Init')
        self.m_config = config
    
    def read_source_file(self, file_path):
        logging.debug(self.m_class_name, "Reading source file")
        if os.path.isfile(file_path):
            with open(file_path, 'r') as file:
                sources = file.readlines()
        else:
            logging.error(self.m_class_name, "Source file not found")
        return sources
    
    def get_alarm_source(self, source_file_path, alarm_start_line, alarm_end_line, alarm_start_col, alarm_end_col):
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