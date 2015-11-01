# Auto-generated code below aims at helping you parse
# the standard input according to the problem statement.

# n: the number of temperatures to analyse
read n
# temps: the n temperatures expressed as integers ranging from -273 to 5526
read temps
echo $temps >&2
min=5527
for i in $temps; do
    if [ $min -lt $i -a $min -lt $((-i)) ];then
        min=$i;
    fi
    if [ $min -gt $i -a $min -gt $((-i)) ];then
        min=$i;
    fi
    if [ $min -eq $((-i)) -a $min -lt 0 ];then
        min=$i;
    fi
    
done

# Write an action using echo
# To debug: echo "Debug messages..." >&2
if [ $n -gt 0 ]; then 
    echo $min
else
    echo 0
fi
