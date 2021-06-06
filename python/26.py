# 計算dict字元出現多少次

a = str(input("請輸入字元:"))
d = dict()
for key in a:
    if key not in d:
        d[key] = 0
    if key in d:
        d[key] += 1
print(d)
