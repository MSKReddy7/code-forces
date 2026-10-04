n = int(input())
 
c = 0
 
for _ in [0]*n:
    w = list(map(int,input().split()))
    if sum(w)>1: c+=1
 
print(c)