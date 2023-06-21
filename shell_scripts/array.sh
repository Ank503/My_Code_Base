# !/bin/bash
fruits=('apple' 'banana' 'grapes')
echo "${fruits[@]}"
echo "${fruits[0]}"
echo "${fruits[1]}"
echo "${!fruits[@]}" # printing the indices
echo "${#fruits[@]}" # printing length of array
fruits[3]='kiwi' # adding the element
fruits[0]='orange' # replacing an element
unset fruits[2] # removing an element

string=asdert
echo "${sring[@]}"
echo "${string[1]}" # at this string nothing will be printed as the string is at 1st index only. 

# Bash supports 1-D array 