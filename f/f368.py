import sys
for line in sys.stdin:
    ary = [i for i in line]
    count = 0
    for j in range(len(ary)):
        if ary[j] == 'R':
            if ary[j+1] == 'E':
                if ary[j+2] =='D':
                    count += 1
        elif ary[j] =='G':
            if ary[j+1] == 'R':
                if ary[j+2] == 'E':
                    if ary[j+3] == 'E':
                        if ary[j+4] == 'N':
                            count += 1
    
    print('1/', 2**count, sep='')
