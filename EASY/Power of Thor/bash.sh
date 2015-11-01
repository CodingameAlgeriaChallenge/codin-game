# Auto-generated code below aims at helping you parse
# the standard input according to the problem statement.
# ---
# Hint: You can use the debug stream to print initialTX and initialTY, if Thor seems not follow your orders.

# lightX: the X position of the light of power
# lightY: the Y position of the light of power
# initialTX: Thor's starting X position
# initialTY: Thor's starting Y position
read lightX lightY initialTX initialTY
posX=$initialTX
posY=$initialTY
# game loop
while true; do
    # remainingTurns: The remaining amount of turns Thor can move. Do not remove this line.
    read remainingTurns
    echo Remain steps = $remainingTurns >&2
    echo lightX=$lightX posX=$posX lightY=$lightY posY=$posY >&2
    
    if [ $posY -lt $lightY -a $posX -lt 18  ]; then
        echo -n S
        posY=$((posY+1))
        echo Down >&2
    fi
    if [ $posY -gt $lightY -a $posY -gt 0  ]; then
        echo -n N
        posY=$((posY-1))
        echo Up >&2
    fi   
    if [ $posX -lt $lightX -a $posX -lt 40  ]; then
        echo -n E
        posX=$((posX+1))
        echo Right >&2
    fi
    if [ $posX -gt $lightX -a $posX -gt 0  ]; then
        echo -n W
        posX=$((posX-1))
        echo Left  >&2
    fi
   
    echo

done
