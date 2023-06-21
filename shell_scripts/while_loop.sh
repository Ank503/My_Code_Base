# echo enter the first number:
# read f
# echo enter the last number:
# read l
# echo the numbers are :
# while (( $f <= $l ))
# do
#     echo "$f"
#     f=$(( f + 1 ))
#     # (( n++ )) or (( ++n ))
#     #sleep 1
#     #gnome-terminal &
# done

#Using sleep command we can set the execution of loop by sec.
#we can open gnome or xterm terminal using this loop.

# Read a file content using while loop.

# 1st way

# echo Enter a file name
# read file_name
# echo Contents of this file is:
# while read filename
# do
#     echo $filename
# done < $file_name # < is input redirection which redirects the file contents to a loop.

# while read a
# do 
#     echo $a
# done < value.sh

# 2nd way:

# cat first.sh | while read p
# do
#     echo $p
# done

# 3rd way: (Using IFS - Internal Field Separater)

while IFS= read -r p
do 
    echo $p
done < ifstat.sh