ary = input()
ans = ary.split()
ans = list(map(int,ans))
max = ans[0]
if ans[1] >max:
    max = ans[1]
if ans[2] >max:
    max = ans[2]
print(max)    
