import os
import logging

class SourceFileFinder:
    m_class_name = "SourceFileFinder"
    m_config = {}
    
    def __init__(self, config):
        logging.info(self.m_class_name, 'Init')
        self.m_config = config
    
    def find_source_file(self, file_name, folder_path):
        """_summary_
        This function will find the source file in the given folder path recursively.

        Args:
            file_name (_type_): _description_
            folder_path (_type_): _description_
        """
        
        # Validate the folder path
        if not os.path.isdir(folder_path):
            logging.error(self.m_class_name, "Invalid folder path")
            return None
        
        # Search for the source file
        for root, dirs, files in os.walk(folder_path):
            if file_name in files:
                logging.debug(self.m_class_name, f"Source file found: {file_name}")
                return os.path.join(root, file_name)
        logging.debug(self.m_class_name, f"Source file not found: {file_name}")
        return None
    
        