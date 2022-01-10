#!/bin/bash
#Script to calculate mem consumptions in %ages
TOTAL=`free -m |awk '/Mem/ {print $2}'`
USED=`free -m |awk '/Mem/ {print $3}'`
FREE=`free -m |awk '/Mem/ {print $4}'`

echo "Total Mem = $TOTAL = 100%"
echo "Used Mem = $(($USED*100/$TOTAL)) %"
echo "Free Mem = $(($FREE*100/$TOTAL)) %"
