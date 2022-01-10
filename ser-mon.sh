#!/bin/bash
#Script to monitor remote server resources
for serv in `cat servers.txt`
do
	echo "Checking NW connectivity to $serv"
	ping -c 3  $serv &>/dev/null
	if [ $? -eq 0 ]; then
		echo "$serv is pinging, cont...."
	else
		echo "$serv is not pinging, skipping..."
		continue	
	fi

	echo -e "\nMem Statistics of $serv" 
		ssh $serv free -m |awk '/Mem/ {print "Tot Mem = " $2}'
		ssh $serv free -m |awk '/Mem/ {print "Used Mem = " $3}'
		ssh $serv free -m |awk '/Mem/ {print "Free Mem = " $4}'

	echo -e "\n CPU LOAD OF $serv"
		ssh $serv uptime |awk -F, '{print $3}'

	echo -e "\n ROOT FS STATUS OF $serv"
		ssh $serv df -h / 
done
