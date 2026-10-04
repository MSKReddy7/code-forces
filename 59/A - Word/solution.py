s = input()
 
uc = sum([1 for i in s if i == i.upper()])
lc = len(s)-uc
 
print(s.upper() if uc>lc else s.lower())