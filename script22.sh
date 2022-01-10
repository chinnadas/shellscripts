#!/bin/bash
#Script to user for loop
read -p "Pl give 1st value: " a
read -p "Pl give 2nd value: " b
	if [ -z "$a" -o -z "$b" ] ;then
		echo "Invalid Input..."
		exit 1
	fi
for op in ADD SUB MUL DIV
do
	case $op in
                ADD)echo "Add=$(($a+$b))";;
                SUB)echo "Sub=$(($a-$b))";;
                MUL)echo "Mul=$(($a*$b))";;
                DIV)echo "Div=$(($a/$b))";;
	esac
done
