#!/bin/bash
gcc -shared -o libmytest.so mytest.o
LD_PRELOAD=/$PWD/libmytest.so ./9 8 10 24 75 9
