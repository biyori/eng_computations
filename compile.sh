#!/bin/bash 
echo "Enter the file to compile: "
read -e filename
gcc -Wall -lm -o $filename $filename.c
read -p "Press any key to run... "
./$filename
echo
read -p "Press enter to exit..."
