import os
import logging
import json

class AalConstructor:
    m_class_name = "AalConstructor"
    m_config = {}
    
    def __init__(self, config):
        logging.info(self.m_class_name, 'Init')
        self.m_config = config
        
    def construct(self, annotations, file_path):
        if not annotations:
            logging.error(self.m_class_name, "No annotations to construct")
            return None
        if os.path.isfile(file_path):
            logging.info(self.m_class_name, "Output file is already exist, overwriting")
            os.remove(file_path)
        aal_str = ""
        aal_str += "__ASTREE_annotation(( /* Block 0 */\n"
        for annotation in annotations:
            aal_str += annotation + "\n"
        aal_str += "));\n"
        with open(file_path, 'w') as file:
            file.write(aal_str)
        logging.info(self.m_class_name, f"AAL file constructed: {file_path}")
        return file_path