#! /bin/bash
var=31

readonly var
var=65
echo "$var"

hello(){
    echo "Hello"
}
readonly -f hello
hello(){
    echo "Hello again"
}
hello


# if we set a variable as readonly we can't reassign a new value to it.
# To make a function readonly we have to use -f flag.
# We can't overrite a function if it is a readonly function.
# By using readonly keyword we can get all readonly buildin variables.
# readonly -p --> for variables.
# readonly -f --> List of all readonly functions in the script.
# readonly -f (function name) --> content of readonly function.
