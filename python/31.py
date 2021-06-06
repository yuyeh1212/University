# 刪除重複字元

str = str(input("請輸入字元:"))
for i in range(len(str)):
    if str[i-1] != str[i]:
        print(str[i], end="")
