#!/usr/bin/python3
"""Minimum Operations"""


def minOperations(n):
    """
    Given a number n, write a method that calculates
    the fewest number of operations needed to result
    in exactly n H characters in the file
        Arguments:
            n: number
        Returns: an integer If n is impossible to
                achieve, return 0
    """
    if n <= 1:
        return 0
    x = n
    y = 2
    NumOpe = 0
    while x > 1:
        if x % y == 0:
            x /= y
            NumOpe += y
        else:
            y += 1
    return NumOpe
