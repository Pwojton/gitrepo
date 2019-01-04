#!/usr/bin/env python
# -*- coding: utf-8 -*-
#
#  app.py
#  
from flask import g
from modele import *
from views import *

@app.before_request
def before_request():
    g.db = baza
    g.db.connect()

    
@app.after_request
def before_request(response):
    g.db.close()
    return response
