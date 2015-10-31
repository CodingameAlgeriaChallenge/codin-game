import sys
import math

# Auto-generated code below aims at helping you parse
# the standard input according to the problem statement.

l = int(raw_input())
h = int(raw_input())
t = raw_input().upper()
mat = []
for i in xrange(h):
    row = raw_input()
    mat.append(row)

# Write an action using print
# To debug: print >> sys.stderr, "Debug messages..."
for i in xrange(h):
    for c in t:
        if ord(c) in xrange(ord("A"),ord("Z")):
            index = ord(c) - ord('A')
        else:
            index = 26
        
        
        
        for j in xrange(l):
            sys.stdout.write(mat[i][j+index*(l)])

    print

