#!/bin/python3

# Given an array, A, of N integers, print A's elements in reverse order as a single line of space-separated numbers.

import math
import os
import random
import re
import sys


if __name__ == '__main__':
    n = int(input().strip())
    arr = list(map(str, input().rstrip().split()))
    reverse_arr = list(reversed(arr))
    spaced_reverse_arr = " ".join(reverse_arr)
    print(spaced_reverse_arr)
