#!/bin/bash
#Script to use return function
calc(){

echo "Add=$(($a+$b))"
echo "Sub=$(($a-$b))"
return
echo "Mul=$(($a*$b))"
echo "Div=$(($a/$b))"
}

a=$1
b=$2
calc

echo "Function is executed successfully"
