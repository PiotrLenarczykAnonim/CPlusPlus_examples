#!/bin/bash
GCC_FLAGS='-mtune=native -march=native -std=c++11 -O3'
touch a.out && rm a.out && clear && g++ dynamicObjects.cpp $GCC_FLAGS -o a.out && ./a.out 4 
rm a.out
