import sys

def run(x, y):
    if x <= y:
        print("No")
    else:
        ant = list(map(int,input().split( )))
        hop = list(map(int,input().split( )))
        if sum(ant) > sum(hop):
            print("Yes")
        else:
            print("No")


for line in sys.stdin:
    x,y = line.split( )
    run(int(x),int(y))
