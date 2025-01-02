import os
import logging
import json

class AnnotationLinker:
    m_class_name = "AnnotationLinker"
    m_config = {}
    m_old_annotation_json = {}
    m_new_annotation_json = {}
    m_need_key = ["data", "alarm_type", "alarm_start_line", "alarm_start_col", "alarm_end_line", "alarm_end_col", "alarm_source", "alarm_file_pos", "alarm_comment", "alarm_classification", "alarm_comment_pos"]
    
    def __init__(self, config, old_annotation_json, new_annotation_json):
        logging.info(self.m_class_name, 'Init')
        self.m_config = config
        self.m_old_annotation_json = old_annotation_json
        self.m_new_annotation_json = new_annotation_json

    def get_alarm_type(self, alarm):
        logging.debug(self.m_class_name, "Getting alarm type")
        return alarm["alarm_type"]
    
    def get_alarm_start_line(self, alarm):
        logging.debug(self.m_class_name, "Getting alarm start line")
        return alarm["alarm_start_col"]
    
    def get_alarm_start_col(self, alarm):
        logging.debug(self.m_class_name, "Getting alarm start column")
        return alarm["alarm_start_col"]
    
    def get_alarm_end_line(self, alarm):
        logging.debug(self.m_class_name, "Getting alarm end line")
        return alarm["alarm_end_line"]
    
    def get_alarm_end_col(self, alarm):
        logging.debug(self.m_class_name, "Getting alarm end column")
        return alarm["alarm_end_col"]
    
    def get_alarm_source(self, alarm):
        logging.debug(self.m_class_name, "Getting alarm source")
        return alarm["alarm_source"]
    
    def get_alarm_file_pos(self, alarm):
        logging.debug(self.m_class_name, "Getting alarm file position")
        return alarm["alarm_file_pos"]
    
    def get_alarm_comment(self, alarm):
        logging.debug(self.m_class_name, "Getting alarm comment")
        return alarm["alarm_comment"]
    
    def get_alarm_classification(self, alarm):
        logging.debug(self.m_class_name, "Getting alarm classification")
        return alarm["alarm_classification"]
    
    def get_alarm_source(self, alarm):
        logging.debug(self.m_class_name, "Getting alarm source")
        return alarm["alarm_source"]
    
    def get_alarm_aal(self, alarm):
        logging.debug(self.m_class_name, "Getting alarm aal")
        return alarm["data"]
    
    def get_alarm_comment_pos(self, alarm):
        logging.debug(self.m_class_name, "Getting alarm comment position")
        return alarm["alarm_comment_pos"]
    
    def _link_rulecheck_alarm(self, old_alarm):   
        """2 rule check alarm are ment to be the same if
        - they have the same alarm type
        - they have the same file location
        - The have the same column location
        - They have the same comment position in comment.c
        """
        logging.debug(self.m_class_name, "Linking rulecheck alarms")
        alarm_start_line = self.get_alarm_start_line(old_alarm)
        alarm_start_col = self.get_alarm_start_col(old_alarm)
        alarm_end_line = self.get_alarm_end_line(old_alarm)
        alarm_end_col = self.get_alarm_end_col(old_alarm)
        alarm_source = self.get_alarm_source(old_alarm)
        alarm_file_pos = self.get_alarm_file_pos(old_alarm)
        alarm_comment_pos = self.get_alarm_comment_pos(old_alarm)
        for new_alarm in self.m_new_annotation_json:
            new_alarm = self.m_new_annotation_json[new_alarm]
            if not all(key in new_alarm for key in self.m_need_key):
                continue
            if self.get_alarm_type(new_alarm) == self.get_alarm_type(old_alarm) and \
                self.get_alarm_start_col(new_alarm) == alarm_start_col and \
                self.get_alarm_end_col(new_alarm) == alarm_end_col and \
                self.get_alarm_comment_pos(new_alarm) == alarm_comment_pos:
                logging.info(self.m_class_name, f"Linking rulecheck alarm {old_alarm} to {new_alarm}")
                logging.info(self.m_class_name, f"Alarm shifted: {alarm_start_line} - {self.get_alarm_start_line(new_alarm)}")
        
        
    def link(self):
        try:
            logging.debug(self.m_class_name, "Linking annotations")
            for alarm in self.m_old_annotation_json:
                old_alarm = self.m_old_annotation_json[alarm]
                if not all(key in old_alarm for key in self.m_need_key):
                    continue
                alarm_type = self.get_alarm_type(old_alarm).strip()
                if alarm_type in self.m_config["rule_check_list"]:
                    self._link_rulecheck_alarm(old_alarm)
        except Exception as e:  
            logging.error(self.m_class_name, f"Error linking annotations: {e}")
            raise
            
            