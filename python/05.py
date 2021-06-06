# 費率計算

keepgoing = "y"
while keepgoing == 'y':
    sale = float(input("enter a num:"))
    rate = float(input("rate:"))
    cost = sale * rate
    print("the cost{}".format(cost))
    keepgoing = input("want to keep going(y/n)?")
