#!/bin/bash
#Script for simple if
if [ -e /etc/hostnames ] ; then
	echo "File exists"
else
	echo "File doesn't exist"
fi
