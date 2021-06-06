# 輸入數字相加

str = input("請輸入數字:")
num_list = [int(num) for num in str.split()]
print(sum(num_list))
