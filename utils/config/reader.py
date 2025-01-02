import os
import json
import logging

class ConfigReader:
    
    m_class_name = "ConfigReader"
    
    def __init__(self, config_parent_folder="./"):
        logging.info(self.m_class_name, 'Init')
        self.m_config = {}
        self.m_config_file = os.path.join(config_parent_folder, "config.json")
        self.load_config()
        
    def load_config(self):
        logging.debug(self.m_class_name, "Loading config file")
        if os.path.isfile(self.m_config_file):
            with open(self.m_config_file, 'r') as file:
                self.m_config = json.load(file)
        else:
            logging.error(self.m_class_name, "Config file not found")
            
    def get_config(self):
        return self.m_config