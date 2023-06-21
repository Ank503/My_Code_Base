#! /bin/bash
# for (( i=0 ; i<=10 ; i++ ))
# do
#     if [ $i -gt 5 ]
#     then
#         break
#     fi
#     echo "$i"
# done

# Break Statement stops the execution for a given condition.

for ((i=0 ; i<=10 ; i++))
do
    if [ $i -eq 3 -o $i -eq 5 ]
    then
        continue
    fi
    echo "$i"
done

# -o is OR operator 
# Continue skips the condition that is provided but continues execution further.
