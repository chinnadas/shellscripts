#!/bin/bash
#Script to do numeric comparison by checking exit codes
ping -c3 192.168.10.82 &>/dev/null
	if [ $? -eq 0 ];then
		echo "server is pinging"
	else
		echo "server is not pinging"
	fi
