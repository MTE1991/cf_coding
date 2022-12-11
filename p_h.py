n = int(input())
count = 0

for i in range(n):
    button = input().lower()
    if (("rose" in button) or ("pink" in button)):
        count += 1
        
if (count == 0):
    print("I must watch Star Wars with my daughter")
else:
    print(count)