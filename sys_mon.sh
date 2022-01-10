#!/bin/bash
#Script to monitor mem,cpu,/ fs
mon(){
echo -e "\e[4;31mMonitoring Table\e[0m"
echo "1.MEM"
echo "2.CPU"
echo "3.DISK '/ FS'"
echo "4.EXIT"
read -p "Pl select an option: " op
		case $op in 
			1)free -m |awk '/Mem/ {print "Tot Mem = " $2}'
			    free -m |awk '/Mem/ {print "Used Mem = " $3}'	
			    free -m |awk '/Mem/ {print "Free Mem = " $4}'
			;;

			2)uptime |awk -F, '{print $3}';;
			
			3)echo "Root Filesytem usage `df -h /`";;
			
			4) exit ;;
			
			*)echo "Invalid Input Selected, Try Again..." ;;
		esac
mon
}
mon
