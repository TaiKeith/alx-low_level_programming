#!/usr/bin/python3
import ctypes
import random

lib = ctypes.CDLL("./100-operations.so")
a = random.randint(-111, 111)
b = random.randint(-111, 111)
result = lib.mul(a, b)

print(f"The result of multiplying {a} and {b} is {result}")
