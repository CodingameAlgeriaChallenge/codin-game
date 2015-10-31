import sys
import math

lightX, lightY, initial_tx, initial_ty = [int(i) for i in raw_input().split()]
thorX , thorY = initial_tx, initial_ty
# game loop
while 1:
    remaining_turns = int(raw_input()) # The remaining amount of turns Thor can move. Do not remove this line.

    if thorX > lightX:
        directionX = "W"
        thorX -=1
    elif thorX < lightX:
        directionX = "E"
        thorX +=1
    else:
        directionX = ""

    if thorY > lightY:
        directionY = "N"
        thorY -=1
    elif thorY < lightY:
        directionY = "S"
        thorY +=1
    else:
        directionY = ""

    print  directionY+ directionX
