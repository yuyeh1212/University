# 列印菱形

math = int(input("oddnum:"))

if math % 2 == 1:
    star = 1
    star2 = math-2
    for i in range(math, 0, -2):
        space = (i-1)//2
        print("{}".format(" "*space)+("*"*star))
        star += 2
    for j in range(0, math, 2):
        space = j//2+1
        print("{}".format(" "*space)+("*"*star2))
        star2 -= 2
else:
    print("你所輸入非奇數")
