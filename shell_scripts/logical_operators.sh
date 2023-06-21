#! /bin/bash
a=25
#if [ "$a" -gt 18 ] && [ "$a" -lt 30 ]
#if [ "$a" -gt 18  -a  "$a" -lt 30 ]
if [[ "$a" -gt 18  &&  "$a" -lt 30 ]]
then
    echo valid number
else
    echo not valid number
fi

# AND Operator is used to check both the conditions.
# -a flag can also be used in place of and operator it stands for and operator.
# for OR Operator we can use || and any of the condition is true it will give valid
# for OR we can use -a with the same syntax.