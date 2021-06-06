# 公里轉英里

skm = int(input("輸入初始速度:"))
ekm = int(input("輸入終止速度:"))
sp = int(input("輸入間距:"))
for skm in range(skm, ekm+1, sp):
    change = skm/1.6
    print('%d=%.2f' % (skm, change))
