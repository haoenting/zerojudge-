import sys
count = 1
for line in sys.stdin:
    num = int(line)
    if num == -1:
        break
    else:
        ary1 = list(map(int, input().split( )))
        ary2 = list(map(int, input().split( )))
        print('Case ',count,':',sep='')

        for i in range(12):
            if num >= ary2[i]:
                print('No problem! :D')
                num -= ary2[i]
            else:
                print('No problem. :(')

            num += ary1[i]
    count += 1
