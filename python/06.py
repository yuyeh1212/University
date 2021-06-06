# 數字反轉

num = int(input("please type num:"))
while num % 10 != 0:
    print(num % 10, end="")
    num = num//10
