#!/bin/bash
#Script to use while loop
read -p "Pl enter number of iterations you want: " i
while [ $i -gt 0 ]
do
	echo "Iteration number $i"
	sleep 1
	i=$(($i-1))
done
