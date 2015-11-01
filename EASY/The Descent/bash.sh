# Auto-generated code below aims at helping you parse
# the standard input according to the problem statement.

highest=0
# game loop

fire=true
while true; do
    read spaceX spaceY
    for (( i=0; i<8; i++ )); do
        # mountainH: represents the height of one mountain, from 9 to 0. Mountain heights are provided from left to right.
        read mountainH
        if [ $mountainH -gt $highest ];then
            highest=$mountainH
            target=$i
        fi
    done
    echo target=$target >&2
    if [ $spaceX -eq $target -a $fire ]; then
        echo "FIRE"
        highest=0
        fire=false
    else
        echo "HOLD"
    fi
    
    if [ $(expr turn % 8) -eq 0 ];then
        fire=true;
    fi
        
done
