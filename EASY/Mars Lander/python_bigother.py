import sys
import math

# Auto-generated code below aims at helping you parse
# the standard input according to the problem statement.

surface_n = int(raw_input()) # the number of points used to draw the surface of Mars.
for i in xrange(surface_n):
     # land_x: X coordinate of a surface point. (0 to 6999)
     # land_y: Y coordinate of a surface point. By linking all the points together in a sequential fashion, you form the surface of Mars.
    land_x, land_y = [int(j) for j in raw_input().split()]


while 1:
     # h_speed: the horizontal speed (in m/s), can be negative.
     # v_speed: the vertical speed (in m/s), can be negative.
     # fuel: the quantity of remaining fuel in liters.
     # rotate: the rotation angle in degrees (-90 to 90).
     # power: the thrust power (0 to 4).
    x, y, h_speed, v_speed, fuel, rotate, power = [int(i) for i in raw_input().split()]

    
    if v_speed < -39:
        th = 4
    else:
        th = 0
    
    print "0", th

