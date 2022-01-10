#!/bin/bash
#Script to use select loop
read -p "Pl give 1st value: " a
read -p "Pl give 2nd value: " b
        if [ -z "$a" -o -z "$b" ] ;then
                echo "Invalid Input..."
                exit 1
        fi
PS3="PL SELECT AN OPTION: "
select op in ADD SUB MUL DIV EXIT
do
        case $op in
                ADD)echo "Add=$(($a+$b))";;
                SUB)echo "Sub=$(($a-$b))";;
                MUL)echo "Mul=$(($a*$b))";;
                DIV)echo "Div=$(($a/$b))";;
        	EXIT) exit ;;
	esac
done

