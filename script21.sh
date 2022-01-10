#!/bin/bash
#Script to use Until loop
read -p "Pl enter number of iterations you want: " i
until [ $i -le 0 ]
do
        echo "Iteration number $i"
        sleep 1
        i=$(($i-1))
done

