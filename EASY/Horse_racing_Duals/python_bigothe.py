n = int(raw_input())
l = []
for i in xrange(n):
    pi = int(raw_input())
    l.append(pi)
    
l.sort()
ld = []
for i in xrange(len(l)-1):
    ld.append(l[i+1] - l[i])
    

print min(ld) 
