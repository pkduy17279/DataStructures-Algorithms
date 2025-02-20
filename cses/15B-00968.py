t = int(input())
while t > 0:
    y, x = map(int, input().split())
    z = max(x, y)
    value = z * z
    if z % 2 == 0:
        print(value - abs(z - y) - abs(1 - x))
    else:
        print(value - abs(z - x) - abs(1 - y))
    t -= 1