bool = True
num = int(input())
if num % 2 == 0 and num != 2:
    bool = False
else:
    n = 3
    while n <= num**0.5 + 1:
        if num % n == 0 :
            bool = False
            break
        n += 2

if bool == True:
    print('yes')
else:
    print('no')
