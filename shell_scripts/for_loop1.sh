#!/bin/bash
# for command in pwd ls date
# do
#     echo "------------$command--------------"
#     $command
# done

#checking dir/file
for item in *
do 
    if [ -d $item ] # -f can be used for checking for a file.
    then
        echo $item
    fi
done