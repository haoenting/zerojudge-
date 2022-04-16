n = int(input())
ary = list(map(int, input().split( )))
ary.sort()
for i in ary:
    print(i, end =' ')
print('')
ary = list(set(ary))
ary.sort()
ary.reverse()
for j in ary:
    print(j, end =' ')
