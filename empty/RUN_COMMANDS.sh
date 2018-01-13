#!/bin/bash
GCC_FLAGS='-mtune=native -march=native -std=c++11 -O2'
touch a.out && rm a.out && clear && g++ empty.cpp $GCC_FLAGS -o a.out && ./a.out 
rm a.out
