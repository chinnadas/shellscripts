#!/bin/bash
#Script to do calculations using case statment and if conditions
calc(){
        read -p "Pl Give your Selection [ADD|SUB|MUL|DIV|EXIT]: " op
        op=`echo $op |tr [a-z] [A-Z]`
        case $op in
                ADD)echo "Add=$(($a+$b))";;
                SUB)echo "Sub=$(($a-$b))";;
                MUL)echo "Mul=$(($a*$b))";;
                DIV)echo "Div=$(($a/$b))";;
                EXIT) echo "Thanks for using my script"
                        exit ;;
                *)echo "Invalid operator selected, Try Again..." ;;
        esac
calc
}

read -p "Pl Give 1st val: " a
read -p "Pl Give 2ns val: " b
	 if [ -z "$a" -o -z "$b"  ];then
                echo "Invalid Input, exiting"
                exit 1
        fi

calc

