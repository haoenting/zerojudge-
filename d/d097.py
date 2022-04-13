import sys

def jolly(ary):
    dif = list()
    total = ary[0]
    ans = total * (total-1) / 2
    while total > 1:
        num = abs(ary[total] - ary[total-1])
        dif.append(num)
        total -= 1
      

    if sum(dif) == ans:
        print("Jolly")
    else:
        print("Not jolly")

for line in sys.stdin:
    ary = list(map(int,line.split( )))
    jolly(ary) 
