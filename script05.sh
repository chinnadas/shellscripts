#!/bin/bash
#Script to create a user and assign password
user=Kusum
pass=`date |md5sum |cut -c 1-6`
echo "Adding a user $user"
useradd $user

echo "Assigning password for $user"
echo $pass |passwd $user --stdin

echo "User $user created Successfully"

echo "User=$user password=$pass"
chage -d 0 $user
