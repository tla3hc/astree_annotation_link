import json
import os
import logging

class JsonUtils:
    m_class_name = "JsonUtils"
    m_config = {}
    
    def __init__(self, config):
        logging.info(self.m_class_name, 'Init')
        self.m_config = config
    
    def load_json(self, json_file):
        logging.debug(self.m_class_name, "Loading json file")
        if os.path.isfile(json_file):
            with open(json_file, 'r') as file:
                json_data = json.load(file)
        else:
            logging.error(self.m_class_name, "Json file not found")
        return json_data
    
    def save(self, json_file, data):
        logging.debug(self.m_class_name, "Saving json file")
        json_file = os.path.abspath(json_file)
        logging.debug(self.m_class_name, f"Saving to {json_file}")
        if os.path.isfile(json_file):
            logging.warning(self.m_class_name, f"File {json_file} already exists. Overwriting")
            os.remove(json_file)
        with open(json_file, 'w') as file:
            json.dump(data, file, indent=4)
        