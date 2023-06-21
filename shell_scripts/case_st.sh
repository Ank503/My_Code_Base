#! /bin/bash
# vehicle=$1

# case $vehicle in
#     "car" )
#         echo "rent of $vehicle is 100$" ;;
#     "van" )
#         echo "rent of $vehicle is 80$" ;;
#     "bycycle" )
#         echo "rent of $vehicle is 5$" ;;
#     "truck" )
#         echo "rent of $vehicle is 150$" ;;
# * )
#         echo "unknown vehicle" ;;
# esac

echo -e "Enter Some Character: \c"
read value
case $value in 
    [a-z] )
        echo "Entered $value is a-z" ;;
    [A-Z] )
        echo "Entered $value" is A-Z ;;
    [0-9] )
        echo "Entered $value is a 0-9" ;;
    ? )
        echo "Entered $value is a special character" ;;
    * )
        echo "Unknown Input" ;;
esac

# * is used as default entry in case.
# ? is pattern which is used in any one letter char.
# Some Error may occur (showing different case results) in that cas we have to set LANG=C