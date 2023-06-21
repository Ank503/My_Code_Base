#!/bin/bash
echo Enter first number
read num1
echo Enter second number
read num2
#num1=30
#num2=20

# echo $(( $num1 + $num2 ))
# echo $(( $num1 - $num2 ))
# echo $(( $num1 * $num2 ))
# echo $(( $num1 % $num2 ))
# echo $(( $num1 / $num2 ))

#Using expr command

echo $( expr $num1 + $num2 )
echo $( expr $num1 - $num2 )
echo $( expr $num1 \* $num2 )
echo $( expr $num1 % $num2 )
echo $( expr $num1 / $num2 )