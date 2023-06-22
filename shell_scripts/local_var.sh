#! /bin/bash
function print(){
   local name=$1
    echo $name
}
name=max
echo $name:Before

print hello

echo $name:After

# All variables are global in shell scripts.
# here name is a global variable and can be accessed anywhere in script.
# if we want that the variable of a function should not change or it remain local we have to use local.
# When we use local variable it can be accessed from inside the function only.
