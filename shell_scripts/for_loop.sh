# ! /bin/bash
for i in 1 2 3 4 5
do
    echo $i
done

#this can be used bash v4.0 or more
for i in {1..10..2} #(start, end, increment)
do 
    echo $i
done

#3rd method
for (( i=0; i<=5; i++; ))
do 
    echo $i
done