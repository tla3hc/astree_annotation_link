"""
Author: TranLam
Date: 2025-01-06
Description: This module is used to parse the math expression in c code to a call hierarchy
"""
import os
import logging
import re
from pycparser import c_parser, c_ast

class CodeHierarchyVisitor(c_ast.NodeVisitor):
    def __init__(self):
        self.hierarchy = {}

    def visit_FuncDef(self, node):
        """
        Visit function definitions and update the hierarchy with function details.

        Args:
            node (Node): The AST node representing the function definition.

        Updates:
            self.hierarchy (dict): Adds an entry for the function with its name, type, and an empty body list.
        """
        func_name = node.decl.name
        self.hierarchy[func_name] = {"type": "function", "body": []}
        self.generic_visit(node.body)

    def visit_Compound(self, node):
        """
        Visit compound blocks inside functions and extract their hierarchy.

        This method processes the compound blocks within a function node and 
        extracts a hierarchy of declarations and function calls.

        Args:
            node (c_ast.Node): The AST node representing a compound block.

        Returns:
            list: A list of dictionaries representing the hierarchy of 
                  declarations and function calls. Each dictionary contains:
                  - "type": The type of the block item ("declaration" or "function_call").
                  - "name": The name of the declaration or function call.
        """
        block_hierarchy = []
        for child in node.block_items or []:
            if isinstance(child, c_ast.Decl):
                block_hierarchy.append({"type": "declaration", "name": child.name})
            elif isinstance(child, c_ast.FuncCall):
                block_hierarchy.append({"type": "function_call", "name": child.name.name})
        return block_hierarchy

    def visit_Struct(self, node):
        """
        Visit structures and update the hierarchy with structure details.

        Args:
            node: The structure node to visit. It should have 'name' and 'decls' attributes.

        The method updates the hierarchy dictionary with the structure name as the key.
        The value is another dictionary containing the type of the structure ('struct')
        and a list of field names if the structure has declarations.
        """
        struct_name = node.name or "anonymous"
        self.hierarchy[struct_name] = {"type": "struct", "fields": []}
        if node.decls:
            for field in node.decls:
                self.hierarchy[struct_name]["fields"].append(field.name)

class Parser:
    m_class_name = "Parser"
    m_config = {}
    
    def __init__(self, config=None):
        logging.info(self.m_class_name, 'Init')
        self.m_config = config
        
    def parse(self, c_code):
        """
        Parses the given C code and returns its hierarchical representation.

        Args:
            c_code (str): The C code to be parsed.

        Returns:
            dict: A hierarchical representation of the parsed C code.
        """
        parser = c_parser.CParser()
        ast = parser.parse(c_code)
        visitor = CodeHierarchyVisitor()
        visitor.visit(ast)
        return visitor.hierarchy

if __name__ == "__main__":
    code = "USS_RG_s_TrfcSignPvw_MovmtPhaSt_measure =\n                     ( (RoadAttributesExtended_AT_TrafficSignsPreview *) (&(Rte_Inst_USSDB->USSDB_Runnable_20ms_RP_USSDB_RoadAttributesExtendedEvents_trafficSignsPreview->value)))->trafficLightList.payload_aos_1.phaseList.payload_aos_0.phase;"
    hierarchy = Parser().parse(code)
    print(hierarchy)