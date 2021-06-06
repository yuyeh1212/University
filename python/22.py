# list值輸入比大小

matirx = list()
for i in range(3):
    sub_matirx = list()
    for j in range(3):
        sub_matirx.append(int(input("please type 9 number:")))
    matirx.append(sub_matirx)
print(matirx)

max = -1
min = 1000000000
for i in range(3):
    for j in range(3):
        if max < matirx[i][j]:
            max = matirx[i][j]
        elif min > matirx[i][j]:
            min = matirx[i][j]
print(max)
print(min)

for i in range(3):
    for j in range(3):
        if max == matirx[i][j]:
            print("{}{}".format(i, j))
        elif min == matirx[i][j]:
            print("{}{}".format(i, j))
