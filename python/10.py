# 問是否重複計算

keepgoing = "y"
while keepgoing == 'y':
    boundary = float(input("enter a boundary:"))
    multiply = float(input("enter a multiply:"))
    sum = 0
    i = multiply
    while i < boundary:
        sum = sum + i
        i = i + multiply
    print(sum, end=" ")
    keepgoing = input("want to keep going(y/n)?")
