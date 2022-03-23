import sys

def student(num):
    xary,yary,total = list(),list(),list()

    ary = list(map(int,input().split( )))
    for i in range(0,num*2,2):
        xary.append(ary[i])
        yary.append(ary[i+1])
    for j in range(num-1):
        for k in range(j+1,num):
            sum = (xary[j] - xary[k])**2 + (yary[j] - yary[k])**2
            sum **= 0.5
            S = sum * 100000
            if S % 10 > 5:
                sum += 0.00005
            total.append(sum)
            
    print('%.4f'%min(total),'\n')

for line in sys.stdin:
    N,M = line.split( )
    student(int(M))

#忽略題目的輸入範例那一行字
