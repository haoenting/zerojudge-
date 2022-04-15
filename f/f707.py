def select(ary):
    total = len(ary) - 1
    big = list()
    small = list()

    for i in range(total):
        if ary[i] % 7 == 0:
            big.append(ary[i])
        else:
            small.append(ary[i])
            
    max, bmax, smax = 0, -1, 100001
    for j in big:
        if j % 70 > bmax:
            max = j
            bmax = j % 70  

    if max != 0:
        print(max)
    else:
        max = 0
        for j in small:
            if j % 77 < smax:
                max = j
                smax = j % 77
        print(max)

ary = list(map(int, input().split( )))
select(ary)
