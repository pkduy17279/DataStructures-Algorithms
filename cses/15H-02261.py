n = int(input())
a = list(map(int, input().split()))
res = 0
for i in range(1, n):
    if a[i] < a[i - 1]:
        res += a[i - 1] - a[i]
        a[i] = a[i - 1]
print(res)
#for i in a:
#    print(i, end=' ')