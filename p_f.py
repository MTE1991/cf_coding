s = input()
grp = [int(i) for i in s.split("-")]

points = 0

points += 3 * grp[0]
points += 1 * grp[2]

print(points)