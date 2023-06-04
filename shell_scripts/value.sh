#! /bin/bash
echo -e "Enter the value of a : \c"
read a
echo -e "Enter the value of b : \c"
read b
echo -e "Enter the value of c : \c"
read c
if [ $a -gt $b ] && [ $a -gt $c ]
then
    echo "Value of a is greater"
elif [ $b -gt $a ] && [ $b -gt $c ]
then
    echo "Value of b is greater"
elif [ $c -gt $a ] && [ $c -gt $b ]
then
    echo "Value of c is greater"
else 
    echo "Values are equal"
fi