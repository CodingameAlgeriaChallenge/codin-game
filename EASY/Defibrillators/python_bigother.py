import sys
import math

# Auto-generated code below aims at helping you parse
# the standard input according to the problem statement.

lon = float(raw_input().replace(",","."))
lat = float(raw_input().replace(",","."))
n = int(raw_input())
l = []

mind=999999999999999999
mini=-1
for i in xrange(n):
    defib = raw_input().split(";")
    adr, x,y = defib[1], float(defib[-2].replace(",",".")), float(defib[-1].replace(",","."))
    l.append(adr)
    dx = ( x - lon) * math.cos( lat/2 + y/2)
    dy = (y - lat)
    d= math.sqrt(dx*dx + dy*dy) * 6371
    if d < mind:
        mind,mini = d, i
        
        
    
print >> sys.stderr,l
# Write an action using print
# To debug: print >> sys.stderr, "Debug messages..."

print l[mini]

