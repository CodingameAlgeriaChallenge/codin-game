import sys
import math

# Auto-generated code below aims at helping you parse
# the standard input according to the problem statement.

n = int(raw_input()) # the number of temperatures to analyse
temps = set(map(lambda x: int(x), raw_input().split())) # the n temperatures expressed as integers ranging from -273 to 5526
temps_pos = set(filter(lambda x: x>=0, temps))
temps_neg = temps - temps_pos

m = 9999999999999

if temps_pos:
    m = min(temps_pos)

if temps_neg:
    m2 = max(temps_neg)
    m1 = m
    m = min(m1,abs(m2))
    if m!=m1:
        m = m2

if m == 9999999999999:
    m = 0
    
print m

