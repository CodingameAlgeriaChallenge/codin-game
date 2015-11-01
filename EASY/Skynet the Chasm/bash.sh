# Auto-generated code below aims at helping you parse
# the standard input according to the problem statement.

# road: the length of the road before the gap.
read road
# gap: the length of the gap.
read gap
# platform: the length of the landing platform.
read platform

jumped=false

jumpPoint=$((road-1))
# game loop
while true; do
    # speed: the motorbike's speed.
    read speed
    # coordX: the position on the road of the motorbike.
    read coordX
    if $jumped ; then
        echo "SLOW"
        continue
    fi
    if [ $coordX -eq $jumpPoint ]; then
        echo "JUMP"
        jumped=true
        continue
    fi
    if [ $speed -lt $((gap+1)) ]; then
        echo "SPEED"
        continue
    fi
    if [ $speed -gt $((gap+1)) ]; then
        echo "SLOW"
        continue
    else
        echo "WAIT"
    fi
    
    # Write an action using echo
    # To debug: echo "Debug messages..." >&2

done
