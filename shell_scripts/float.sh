#! /bin/bash

num1=20.5
num2=5

echo "20.5+5" | bc
#echo "$num1+$num2" | bc
echo "20.5-5" | bc
echo "20.5*5" | bc
echo "scale=2;20.5/5" | bc
echo "20.5%5" | bc

num=27
echo "scale=2;sqrt($num)" | bc -l
echo "scale=2;3^3" | bc -l

# while division is not giving accurate result we will use scale = (upto whatever decimal place)
# we have to use bc command for float value calculation.
# for finding squareroot we have to use sqrt function and -l is math library that we have to import