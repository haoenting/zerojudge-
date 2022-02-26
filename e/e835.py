num = int(input())
if num < 2501 :
    a = 1
    b = num // 25 +1
    c = num % 25
    if c==0:
        b -=1
        c=25
elif num < 7501:
    a = 2
    num -= 2500
    b = num // 50 +1
    c = num % 50
    if c==0:
        b-=1
        c=50
else:
    a = 3
    num -= 7500
    b = num // 25 +1
    c = num % 25
    if c==0:
        b-=1
        c=25

print(a,b,c)
