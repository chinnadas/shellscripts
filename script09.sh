#!/bin/bash
#Script to take password from user
read -p "Pl give a desired user name: " user
read -s -p "Pl enter password for the user: " pass

echo -e "\nUser name = $user\nPassword = $pass "
