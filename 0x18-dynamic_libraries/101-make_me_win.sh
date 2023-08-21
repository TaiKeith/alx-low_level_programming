#!/bin/bash
gcc -c -fPIC mytest.c
gcc -shared -o libmytest.so mytest.o
