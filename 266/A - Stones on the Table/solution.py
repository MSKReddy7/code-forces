_,n = input(),list(input())
r = 0
for i in range(len(n)-1):
    if n[i] == n[i+1]: r+=1
print(r)