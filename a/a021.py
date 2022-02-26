a = input()
b = a.split()
x = int(b[0])
y = int(b[2])
if b[1] == '+' :
    print(x+y)
elif b[1] == '-' :
    print(x-y)
elif b[1] == '*' :
    print(x*y)
else :
    print(x//y)   
