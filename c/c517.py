x, y = map(int,input().split( ))
x1, y1 = map(int,input().split( ))
x2, y2 = map(int,input().split( ))
xmin, ymin = 0, 0
if x < x1:
    xmin = x1 - x
elif x > x2:
    xmin = x - x2

if y < y1:
    ymin = y1 - y
elif y > y2:
    ymin = y - y2

print(xmin + ymin)
