#!/bin/bash
#Script to collect resource usage from diff machines
for i in `cat /root/servers.txt`
do
echo -e "\nChecking Network connectivity for $i"
ping -c3 $i &>/dev/null
	if [ $? -eq 0 ];then
		echo "$i is pinging, continuing to next step"
	else
		echo "$i is not pinging,Skipping to next server"
		continue 
	fi
echo -e "\e[4;31mResource details of $i server\e[0m"
echo -e "\e[4m MEMORY DETAILS\e[0m"
ssh $i free -m |awk '/Mem/ {print "TOTAL MEM = " $2}'
ssh $i free -m |awk '/Mem/ {print "USED  MEM = " $3}'
ssh $i free -m |awk '/Mem/ {print "FREE MEM = " $4}'


echo -e "\e[4m CPU LOAD\e[0m"
ssh $i uptime | awk -F, '{print $3}'

echo -e "\e[4m ROOT FS DETAILS\e[0m"
ssh $i df -h /
done

echo "Script completed"
