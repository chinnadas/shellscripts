#!/bin/bash
#Script to user getopts and do calculation
Usage(){
	echo "Usage:`basename $0` -a val -b val -o operator[ADD|SUB|MUL|DIV]"
	echo "Ex: `basename $0` -a 10 -b 20 -o ADD"
	exit 1
}

	if [ $# -le 0 ]	; then
 		Usage
	fi
	while getopts a:b:o: opt
	do
		case $opt in
			a)a=$OPTARG;;
			b)b=$OPTARG;;
			o)o=$OPTARG;;
		esac
	done
o=`echo $o |tr [a-z] [A-Z]`
	case $o in
                ADD)echo "Add=$(($a+$b))";;
                SUB)echo "Sub=$(($a-$b))";;
                MUL)echo "Mul=$(($a*$b))";;
                DIV)echo "Div=$(($a/$b))";;
	esac
