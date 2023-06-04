#! /bin/bash

# By using -e it will interpret the /c and keep the cursor on the same line.

echo -e "Enter the file name : \c" 
read file_name
if [ -d $file_name ] # -e flag is used to check whether file is present or not
then
    echo $file_name found
else
    echo file not found
fi

# -f flag is for checking whether it is regular file or not
# -d flag is for checking existence of directories
# character special file--> Normal files such as text and other similar data [flag used-> -b]
# block special file-->video music and image kind of files [flag used-> -c]
# for checking file is empty or not we use -s flag
# for checking permissions of file we can use r-w-x flags for read,write and execute respectively.