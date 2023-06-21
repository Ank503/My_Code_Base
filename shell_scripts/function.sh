# ! /bin/bash
# function hello(){
#     echo "Hi i am Ankit"
# }
# function greet(){
#     echo "Hi good morning"
# }

# greet
# hello

# while calling a function it follow a execution sequence
# we can use arguments in a function to print its output.
# $1 $2 $3 can be considered as first second and third arguments.

function print(){
    echo $1 $2
}

print good morning
