import math

# Auto-generated code below aims at helping you parse
# the standard input according to the problem statement.

road = int(raw_input()) # the length of the road before the gap.
gap = int(raw_input()) # the length of the gap.
platform = int(raw_input()) # the length of the landing platform.

jumped = 0
# game loop
while 1:
    speed = int(raw_input()) # the motorbike's speed.
    coord_x = int(raw_input()) # the position on the road of the motorbike.

    # Write an action using print
    # To debug: print >> sys.stderr, "Debug messages..."

    # A single line containing one of 4 keywords: SPEED, SLOW, JUMP, WAIT.
    print >> sys.stderr, speed, gap, platform
    if coord_x < road-1:
        if speed <= gap:
            print "SPEED"
        elif speed > gap+1:
            print "SLOW"
        else:
            print "WAIT"

    elif not jumped and  coord_x >= road - 1  :
        print "JUMP"
        jumped = 1
    elif road + gap <= coord_x or jumped :
        print "SLOW"
    else:
        print "WAIT"
