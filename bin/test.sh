#!/bin/bash

clear
echo "Deleting test files..."

rm test/*_modified.png > /dev/null 2>&1
./png-color-changer -i ffffff80 -c fea800ff -p ./test -t 1
# rm single/*_modified.png > /dev/null 2>&1
# ./c-color-changer -i ffffff80 -c fea800ff -p ./single