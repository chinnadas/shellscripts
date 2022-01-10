#!/bin/bash
#Script to do simple calculations
read -p "Pl give 1st val: " a
read -p "Pl give 2nd val: " b

echo "Add=$(($a+$b))"
echo "Sub=$(($a-$b))"
echo "Mul=$(($a*$b))"
echo "Div=$(($a/$b))"
