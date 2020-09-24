#!/usr/bin/python3
"""validUTF8 Funn_bytesion"""


def validUTF8(data):
    """method that determines if a given data set
    represents a valid UTF-8 encoding"""
    n_bytes = 0
    for i in data:
        if n_bytes == 0:
            if (i >> 5) == 0b110:
                n_bytes = 1
            elif (i >> 4) == 0b1110:
                n_bytes = 2
            elif (i >> 3) == 0b11110:
                n_bytes = 3
            elif (i >> 7):
                return False
        else:
            if (i >> 6) != 0b10:
                return False
            n_bytes -= 1
    return n_bytes == 0
