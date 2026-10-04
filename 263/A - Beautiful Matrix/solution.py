r,c = 0,0
for i in range(5):
    li = list(map(int,input().split()))
    if 1 in li:
        r = i
        c = li.index(1)
 
print(abs(r-2)+abs(c-2))