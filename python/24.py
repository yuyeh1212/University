# 用def寫list比大小(使用者輸入)

def inp(x):
    matrix = list()
    for i in range(x):
        sub_matrix = list()
        for j in range(x):
            num = int(input("please type number:"))
            sub_matrix.append(num)
        matrix.append(sub_matrix)
    return matrix


def fmax(matrix, x):
    max1 = 0
    min1 = 999999
    for i in range(x):
        for j in range(x):
            if matrix[i][j] > max1:
                max1 = matrix[i][j]
            elif matrix[i][j] < min1:
                min1 = matrix[i][j]
    for i in range(x):
        for j in range(x):
            if matrix[i][j] == max1:
                print("max({},{})".format(i, j))
            elif matrix[i][j] == min1:
                print("min({},{})".format(i, j))


def main():
    x = int(input("please type a number:"))

    fmax(inp(x), x)


main()
