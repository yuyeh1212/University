# 計算座標距離

x1 = float(input("please type x1:"))
y1 = float(input("please type y1:"))
x2 = float(input("please type x2:"))
y2 = float(input("please type y2:"))
distance = ((x1-x2)**2+(y1-y2)**2)**0.5
print("the distance is:{}".format(distance))
