#! /bin/bash
echo -e "Tell me what u want to make: /c"
read op
if [ $op == file ]
then
    echo name the file
    read file_name
    touch $file_name
    echo do you want to note down anything
    read ex
    if [ $ex == yes ]
    then
        cat > $file_name
    fi
fi