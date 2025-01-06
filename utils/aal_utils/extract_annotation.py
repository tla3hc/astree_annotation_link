import os
import logging
import json

class AnnotationExtractor:
    m_class_name = "AnnotationExtractor"
    m_config = {}
    
    def __init__(self, config):
        logging.info(self.m_class_name, 'Init')
        self.m_config = config
        
    def validate(self, annotation: str):
        logging.debug(self.m_class_name, "Validating annotation")
        if "__ASTREE_comment" not in annotation:
            return False
            # if "RULECHECKER_comment" not in annotation:
            #     return False
        if not annotation.endswith("*/"):
            return False
        return True
    
    def get_alarm_start_line(self, annotation: str):
        try:
            alarm_pos_str = annotation.split("/*")[1].split("*/")[0]
            alarm_pos = alarm_pos_str.split(":")[1]
            alarm_start_line = int(alarm_pos.split("-")[0].split(".")[0])
            return alarm_start_line
        except Exception as e:
            return None
    
    def get_alarm_start_col(self, annotation: str):
        try:
            alarm_pos_str = annotation.split("/*")[1].split("*/")[0]
            alarm_pos = alarm_pos_str.split(":")[1]
            alarm_start_col = int(alarm_pos.split("-")[0].split(".")[1])
            return alarm_start_col
        except Exception as e:
            return None
    
    def get_alarm_end_line(self, annotation: str):
        try:
            alarm_pos_str = annotation.split("/*")[1].split("*/")[0]
            alarm_pos = alarm_pos_str.split(":")[1]
            alarm_end = alarm_pos.split("-")[1]
            if '.' in alarm_end:
                alarm_end_line = int(alarm_end.split(".")[0])
            else:
                alarm_end_line = None
            return alarm_end_line
        except Exception as e:
            return None
    
    def get_alarm_comment_pos(self, annotation: str):
        # Get the annotation in comment.c
        try:
            alarm_data = annotation.split("__ASTREE_comment(( ")[1].split("));")[0]
            comment_pos = f'{alarm_data.split(",")[0].strip()}, {alarm_data.split(",")[1].strip()}'
            return comment_pos
        except Exception as e:
            logging.error(self.m_class_name, f"Error: {e}")
            raise
    
    def get_alarm_end_col(self, annotation: str):
        try:
            alarm_pos_str = annotation.split("/*")[1].split("*/")[0]
            alarm_pos = alarm_pos_str.split(":")[1]
            alarm_end = alarm_pos.split("-")[1]
            if '.' in alarm_end:
                alarm_end_col = int(alarm_pos.split("-")[1].split(".")[1])
            else:
               alarm_end_col = int(alarm_pos.split("-")[1])
            return alarm_end_col
        except Exception as e:
            return None
    
    def get_alarm_pos(self, annotation: str):
        #  /*USS_DA_LAD.c:2479.0-2505.1*/
        try:
            alarm_pos_str = annotation.split("/*")[1].split("*/")[0]
            if len(alarm_pos_str) == 0:
                raise ValueError("Alarm position string is empty")
            alarm_file_pos = alarm_pos_str.split(":")[0]
            alarm_start_line = self.get_alarm_start_line(annotation)
            alarm_start_col = self.get_alarm_start_col(annotation)
            alarm_end_line = self.get_alarm_end_line(annotation) 
            if not alarm_end_line:
                alarm_end_line = alarm_start_line
            alarm_end_col = self.get_alarm_end_col(annotation)
            return alarm_file_pos, alarm_start_line, alarm_start_col, alarm_end_line, alarm_end_col
        except Exception as e:
            logging.error(self.m_class_name, f"Error: {e}")
            raise
    
    def get_alarm_comment(self, annotation: str):
        try:
            alarm_data = annotation.split("__ASTREE_comment(( ")[1].split("));")[0]
            comma_num = alarm_data.count(",")
            if comma_num > 4:
                alarm_comment = ",".join(alarm_data.split(",")[3:comma_num-1])
            else:
                alarm_comment = alarm_data.split(",")[3]
            return alarm_comment
        except Exception as e:
            logging.error(self.m_class_name, f"Error: {e}")
            raise
    
    def get_alarm_type(self, annotation: str):
        try:
            alarm_data = annotation.split("__ASTREE_comment(( ")[1].split("));")[0]
            alarm_type = alarm_data.split(",")[2]
            return alarm_type
        except Exception as e:
            logging.error(self.m_class_name, f"Error: {e}")
            raise
    
    def get_alarm_classification(self, annotation: str):
        try:
            alarm_data = annotation.split("__ASTREE_comment(( ")[1].split("));")[0]
            alarm_classification = alarm_data.split(",").pop()
            return alarm_classification
        except Exception as e:
            logging.error(self.m_class_name, f"Error: {e}")
            raise
        
    def extract(self, annotation: str):
        try:
            logging.debug(self.m_class_name, "Extracting annotation")
            if not self.validate(annotation):
                return None
            alarm_file_pos, alarm_start_line, alarm_start_col, alarm_end_line, alarm_end_col = self.get_alarm_pos(annotation)   
            annotation_data = {}
            annotation_data['alarm_file_pos'] = alarm_file_pos
            annotation_data['alarm_start_line'] = alarm_start_line
            annotation_data['alarm_start_col'] = alarm_start_col
            annotation_data['alarm_end_line'] = alarm_end_line
            annotation_data['alarm_end_col'] = alarm_end_col
            annotation_data['alarm_comment'] = self.get_alarm_comment(annotation)
            annotation_data['alarm_type'] = self.get_alarm_type(annotation)
            annotation_data['alarm_classification'] = self.get_alarm_classification(annotation)
            annotation_data['alarm_comment_pos'] = self.get_alarm_comment_pos(annotation)
            return annotation_data
        except Exception as e:
            logging.error(self.m_class_name, f"Error: {e}")
            raise
        