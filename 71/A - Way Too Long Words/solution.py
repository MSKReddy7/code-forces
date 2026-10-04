n = int(input())
 
for _ in [0]*n:
    w = input()
    if len(w)>10:
        print(f"{w[0]}{len(w)-2}{w[-1]}")
    else:
        print(w)