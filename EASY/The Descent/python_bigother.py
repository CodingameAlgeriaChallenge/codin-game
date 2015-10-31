import sys
import math

# Auto-generated code below aims at helping you parse
# the standard input according to the problem statement.

monts =[0] * 8

# game loop
while 1:
    space_x, space_y = [int(i) for i in raw_input().split()]
    for i in xrange(8):
        mountain_h = int(raw_input()) # represents the height of one mountain, from 9 to 0. Mountain heights are provided from left to right.
        monts[i] = mountain_h

    # either:  FIRE (ship is firing its phase cannons) or HOLD (ship is not firing).
    if monts[space_x] == max(monts) and monts[space_x] > 0 :
        print "FIRE"
    else:
        print "HOLD"
