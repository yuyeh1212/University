# 輸入兩數計算ab之間b的被數總和

a = float(input("enter a boundary:"))
b = float(input("enter a multiply:"))
sum = 0
i = b
while i < a:
    sum = sum + i
    i = i + b
print(sum, end=" ")
