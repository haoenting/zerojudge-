def tri(num):
    count = num - 2
    for i in range(1,num):
       print("_"*(count), end = '') 
       print("*" * i)
       count -= 1


num = int(input())
tri(num+1)
