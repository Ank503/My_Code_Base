#! /bin/bash
# a=10

# if (( $a >= 10 ))
# # for checking >= we have to use () or we can use [] while writing -ge
# then        
#     echo "True"
# fi

# w=abc
# if [ $w = a ]
# then 
#     echo "True"
# else
#     echo "False"
# fi
# whenever we have to use angle brackets we have to use [[]]

# Using elif

x=abc
if [ $x = abc ]
then
    echo "True"
elif [ $x = b]
then
    echo "True"
else 
    echo "False"
fi