#!/usr/bin/env zsh

g++ -std=c++11 -c fact.cpp 
g++ -std=c++11 -c factMain.cpp
g++ -std=c++11 fact.o factMain.o
./a.out
