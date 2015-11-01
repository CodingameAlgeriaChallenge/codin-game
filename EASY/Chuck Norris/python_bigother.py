import math


message = raw_input()

# Write an action using print
# To debug: print >> sys.stderr, "Debug messages..."
print >> sys.stderr, message

bin = []
for c in message:
    bin += list("{0:07b}".format(ord(c)))
    

while(bin):
        if bin[0] == "1":
            output = "0 0"
            bin = bin[1:]
            while(bin and bin[0] == "1"):
                output+="0"
                bin = bin[1:]
                
        else:
            output = "00 0"
            bin = bin[1:]
            while(bin and bin[0] == "0"):
                output+="0"
                bin = bin[1:]
        print output,

