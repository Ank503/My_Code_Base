# ! /bin/bash
# echo Enter the first number:
# read num1
# num2=1
# while (( $num2 <= 10 ))
# do
#     mul=$(( $num1 * $num2 ))
#     echo $mul
#     num2=$(( num2 + 1 ))
# done

# Type2

echo What you want to print:
read text
if [ $text = table ]
then 
    echo Go ahed!
    echo "Enter a number:"
    read num1
    num2=1
    while [ $num2 -le 10 ]
    do  
        mul=$(($num1 * $num2))
        echo "$num1 * $num2 = $mul"
        sleep 1
        ((num2++))
    done
else 
    echo exiting
fi