code = input()
code = [i for i in code]
ary = list()
for i in code:
    ary.append(ord(i))

for j in range(6):
    print(abs(ary[j] - ary[j+1]), end ='')
