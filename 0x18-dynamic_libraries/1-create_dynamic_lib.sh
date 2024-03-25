#!/bin/bash
gcc -o *.c -fpic && cc *o -shared -o liball.so *.o
