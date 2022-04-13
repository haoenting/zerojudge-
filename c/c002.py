def fun(N):
    if N < 101:
        return(fun(fun(N+11)))
    else:
        return(N-10)

x = int(input())
while x != 0:
    num = fun(x)
    print("f91(",x,") = ", num, sep ='')
    x = int(input())
