# -*- coding:utf8 -*-
#/usr/bin/env python

class Node(object):
    def __init__(self, date, pnext = None):
        self.date = date
        self.next = pnext

class ChainTable(object):
    def __init__(self):
        self.head = None
        self.length = 0

    def isEmpty(self):
        if self.length == 0:
            return True
        else :
            return False

    def append(self, value):
        node = None
        if isinstance(value, Node):
            node = value
        else :
            node = Node(value)

        if self.head == None:
            self.head = node
            self.length += 1
        else :
            p = self.head
            while p.next:
                p = p.next
            p.next = node
            self.length += 1

    def delete(self, index):
        if index >= self.length:
            return False
        p = self.head
        q = self.head
        while index > 0:
            p = q
            q = q.next
            index -= 1
        p.next = q.next
        self.length -= 1
chain = ChainTable()
