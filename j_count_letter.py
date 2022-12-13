from collections import Counter, OrderedDict

s = input()
mp = Counter(s)
mp1 =  OrderedDict(sorted(mp.items()))

for key, val in mp1.items():
    print(f"{key} : {val}")
