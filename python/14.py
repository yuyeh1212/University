# 用'+'和'-'組成正方形

def main():
    row = int(input("enter row:"))
    column = int(input("enter column:"))
    gridsize = int(input("enter gridsize:"))

    for j in range(row):
        print_boundary(column, gridsize)
        print_boundary2(column, gridsize)
    print_boundary(column, gridsize)


def print_boundary(column, gridsize):
    print(("+"+"-"*gridsize)*column+"+")


def print_boundary2(column, gridsize):
    for i in range(gridsize):
        print(("|"+" "*gridsize)*column+"|")


main()
