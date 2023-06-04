#! /bin/bash

#echo $0 $1 $2 $3 #Number of parameter passed according to their order.
#$0 Represents the name of the shell script

#Print using array

args=("$@")
echo ${args[0]} ${args[1]} ${args[2]}
#echo $@ #prints the name of all arguments passed
#echo $# #Number of arguments passed