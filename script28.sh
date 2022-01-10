#!/bin/bash
#script to download multiple files from ftp using heredoc
server=192.168.10.92 ##server address
user=ftp ##user name
pass=anything ##password
dir=pub/mydata
file=*
#Giving instructions to connect to ftp server and downloading data
ftp -n $server <<FTP 
quote USER $user
quote PASS $pass
bin
prompt
hash
cd $dir
mget $file
FTP
