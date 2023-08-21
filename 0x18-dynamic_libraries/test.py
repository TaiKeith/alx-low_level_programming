#!/usr/bin/python3
import ctypes

lib = ctypes.CDLL("./100-operations.so")
result = lib.mul(4, 7)

print(f"The result of multiplication is {result}")
