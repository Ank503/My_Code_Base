#! /bin/bash
# In this case we have to enter input in different line 
echo "Enter your Names: "
read name name1
echo "Names you entered: $name , $name1"

# For taking input in same line
read -p "Username: " na
read -sp "Password: " ps # Hides whatever text you are printing 
echo "Name you Entered: $na"
echo Welcome user!

# Storing userdata in array
echo "Enter Data"
read -a data
echo "Data: ${data[0]} , ${data[1]}"

#REPLY variable
echo "Enter name"
read
echo "Name : $REPLY"