# 九九乘法表

for i in range(1, 10):
    for j in range(1, 10):
        s = i*j
        print('%d*%d=%2d' % (i, j, s), end="  ")
    print()
