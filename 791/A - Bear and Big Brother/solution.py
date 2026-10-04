l,b = [int(i) for i in input().split()]
c=0
while l<=b:
    l*=3
    b*=2
    c+=1
print(c)