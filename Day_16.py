#!/bin/python

import sys

S = raw_input().strip()

try:
    print int(S)
    
except ValueError as verr:
    print "Bad String"
    
except Exception as ex:
    print "Bad String"
 
