import os
import logging

class AnnotationReader:
    m_class_name = "AnnotationReader"
    m_config = {}
    m_annotation = {}
    m_is_in_annotation = False
    
    def __init__(self, config):
        logging.info(self.m_class_name, 'Init')
        self.m_config = config
    
    def is_start_annotation(self, line):
        if self.m_config['annotation_block_start'] in line and not self.m_is_in_annotation:
            self.m_is_in_annotation = True
            return True
        else:
            return False
    
    def is_end_annotation(self, line):
        if line == self.m_config['annotation_block_end'] and self.m_is_in_annotation:
            self.m_is_in_annotation = False
            return True
        else:
            return False
    
    def is_in_annotation(self, line):
        return self.m_is_in_annotation and not self.is_end_annotation(line)
    
    
    def read_annotation(self, annotation_file):
        logging.debug(self.m_class_name, "Reading annotation file")
        if os.path.isfile(annotation_file):
            with open(annotation_file, 'r') as file:
                annotation_text = file.read()
        else:
            logging.error(self.m_class_name, "Annotation file not found")
        
        # Get annotation data between "__ASTREE_annotation((" and "))"
        for line in annotation_text.splitlines():
            if self.is_start_annotation(line):
                continue
            if self.is_end_annotation(line):
                continue
            if self.is_in_annotation(line):
                annotation_length = len(self.m_annotation)
                new_annotation = {}
                new_annotation['data'] = line
                self.m_annotation[annotation_length+1] = new_annotation
        return self.m_annotation
    
    def get_annotation(self):
        return self.m_annotation
                
            
    
    