#!/bin/bash

rm -r Dungeon
g++ -std=c++11 CDungeon.cpp node.cpp process.cpp -o CDungeon
./CDungeon