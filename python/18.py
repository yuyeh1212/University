# 讀寫九九乘法表

file = open('f_name', 'w')
for i in range(1, 10):
    for j in range(1, 10):
        y = i*j
        file.write("{}*{}={}\n".format(i, j, y))
file.close()

file = open('f_name', 'r')
for line in file:
    print(line)
file.close()
