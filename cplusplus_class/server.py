# !/usr/bin/python
# -*- coding:UTF-8 -*-

import socket

s = socket.socket()
host = ''
port = 21567
s.bind((host, port))

s.listen(5)
while True:
    c, addr = s.accept()
    print "Link Address:", addr
    c.send("Welcome ~ ")
    c.close()
