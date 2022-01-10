#!/bin/bash
#Script to do cal using simple if 
read -p "Pl give 1st input: " a
read -p "Pl give 2nd Input: " b
	if [ -z "$a" -o -z "$b" ]; then
		echo "Invalid Input,Exiting..."
		exit 1
	fi
read -p "Pl Select an Operator[ADD|SUB|MUL|DIV]: " op
op=`echo $op |tr [a-z] [A-Z]`
	if [ "$op" = ADD ]; then
		echo "Add = $(($a+$b))"

		elif [ "$op" = SUB ]; then
                	echo "Sub = $(($a-$b))"

	
	
			elif [ "$op" = MUL ]; then
                		echo "Mul = $(($a*$b))"
        
        

				elif [ "$op" = DIV ]; then
                			echo "Div = $(($a/$b))"
        
        		else
				echo "Invalid OPerator"
				exit 1
	fi

	
