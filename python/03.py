# 判斷是否可成為三角形

a = float(input("please type a:"))
b = float(input("please type b:"))
c = float(input("please type c:"))
if a > 0 and b > 0 and c > 0 and (a+b > c) and (a+c > b) and (b+c > a):
    print("可以成為三角形")
    print(a+b+c)
else:
    print("不能成為三角形")
    print("無法計算周長")
