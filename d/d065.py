ary = input()
ans = ary.split()
max = int(ans[0])
if int(ans[1]) >max:
    max = int(ans[1])
if int(ans[2]) >max:
    max = int(ans[2])
print(max)       
