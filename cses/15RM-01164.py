n = int(input())
a = list(map(int, input().split()))
mark = [False] * n
for i in a:
    mark[i - 1] = True
for i in range(0, n):
    if mark[i] == False:
        print(i + 1)
        break