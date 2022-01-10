#!/bin/bash
#Script to take backup and move to other server
file=/etc
dest=/opt
server=192.168.10.81

echo "Backup of $file is starting"
sleep 3
tar -zcvf $dest/`date "+%F"`-etc.tgz $file &>/dev/null # tar -zcvf /opt/etc.tgz /etc
	if [ $? -eq 0 ];then
		echo "Backup of $file is successful"
	else
		echo "Backup failed"
		exit 1
	fi
echo "Checking N/W connectivity to $server"
	ping -c 3 $server &>/dev/null
	if [ $? -eq 0 ];then
		echo "Server is pinging,contuing to next step.."
	else	
		echo "Server is not pinging, exiting..."
	fi
	
	scp $dest/`date "+%F"`-etc.tgz $server:/opt/BACKUP
	if [ $? -eq 0 ];then
		echo "Copying is successful"
		rm -f $dest/`date "+%F"`-etc.tgz
	else
		echo "Copying failed, exiting..."
		exit 1
	fi

