import sys
import math

# Auto-generated code below aims at helping you parse
# the standard input according to the problem statement.

n = int(raw_input()) # Number of elements which make up the association table.
q = int(raw_input()) # Number Q of file names to be analyzed.
mimes = {}
for i in xrange(n):
     # ext: file extension
     # mt: MIME type.
    ext, mt = raw_input().split()
    mimes[ext.lower()] = mt; 
    
    
for i in xrange(q):
    fname = raw_input().lower().split(".") # One file name per line.
    if len(fname)>1 and mimes.has_key(fname[-1]):
        print mimes[fname[-1]]
    else:
        print "UNKNOWN"

        

