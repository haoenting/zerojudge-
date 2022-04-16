a1 = list(map(int,input().split( )))
b1 = list(map(int,input().split( )))
a2 = list(map(int,input().split( )))
b2 = list(map(int,input().split( )))

print(sum(a1),":",sum(b1),sep='')
print(sum(a2),":",sum(b2),sep='')
num = 0
if sum(a1) > sum(b1):
    num += 1
else:
    num -= 1

if sum(a2) > sum(b2):
    num += 1
else:
    num -= 1

if num == 0:
    print('Tie')
elif num > 0:
    print('Win')
else:
    print('Lose')
