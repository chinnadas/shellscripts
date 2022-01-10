#!/bin/bash
#Script to do simple calculations using spl variables
a=$1
b=$2

echo "Add=$(($a+$b))"
echo "Sub=$(($a-$b))"
echo "Mul=$(($a*$b))"
echo "Div=$(($a/$b))"
