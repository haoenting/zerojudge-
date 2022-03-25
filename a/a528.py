import sys

def run(num):
    ary = list()
    for i in range(num):
        x = int(input())
        ary.append(x)
    ary.sort()
    for i in range(num):
        print(ary[i])

for line in sys.stdin:
    
    run(int(line))
