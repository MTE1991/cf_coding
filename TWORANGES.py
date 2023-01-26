t = int(input())

for _ in range(t):
    a, b, c, d = [int(i) for i in input().split()]
    s = set()
    for i in range(a, b+1):
        s.add(i)
    for i in range(c, d+1):
        s.add(i)
    print(len(s))
