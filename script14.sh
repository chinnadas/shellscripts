#!/bin/bash
#Script to use simple case
read -p "Pl Give your Choice [UNIX|LINUX]: " op

	case $op in
		UNIX)uname -a;;
		LINUX)cat /etc/os-release;;
		*)echo "Invalid Input"
	esac

