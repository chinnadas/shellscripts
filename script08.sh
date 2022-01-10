#!/bin/bash
#Script to use read command and prompt a message
details(){
read -p "Pl Enter your Name: " name

read -p  "Pl Enter your Location: " loc

echo -e "Your Name is $name\nYour Location is $loc"
}

details
