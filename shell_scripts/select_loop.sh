# ! /bin/bash
select fruits in apple grapes guava mango
do
    case $fruits in
    apple)
        echo apple selected
        ;;
    grapes)
        echo grapes selected
        ;;
    guava)
        echo guava selected
        ;;
    mango)
        echo mango selected
        ;;
    *)
        echo ERROR
    esac
done