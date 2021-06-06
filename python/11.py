# 列印三角形

num = int(input("please enter num:"))
i = num
while num > 0:
    print("{}".format("*"*num))
    num -= 1
while i > 0:
    print("{}".format("*"*i))
    i -= 1

num = int(input("please enter num:"))
for i in range(2):
    for j in range(num, 0, -1):
        print('*'*j)
