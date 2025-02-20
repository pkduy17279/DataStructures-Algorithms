s = input()
res = 1
pre = 0
for i in range(1, len(s)):
    if s[i] != s[i - 1]:
        res = max(res, i - pre)
        pre = i
res = max(res, len(s) - pre)
print(res)