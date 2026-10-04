k,n,w = map(int,input().split())
# k,n,w = [1,2,1]
t = 0
for i in range(1,w+1):
    t += i*k
print(max(t-n,0))