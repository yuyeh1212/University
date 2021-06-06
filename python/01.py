#計算折扣後的金額
# 程式由上往下跑，範圍最小丟第一個，往下範圍慢慢擴增

money = int(input("please type money:"))
if money>=20000:
        print(money*0.8)
        print("add resut:{}".format(money-money*0.8))
elif money>=10000:
        print(money*0.9)
        print("add resut:{}".format(money-money*0.90))
elif money >=8000:
        print(money*0.95)
        print("add resut:{}".format(money-money*0.80))
else:
        print(money)
        print("add resut:{}".format(money-money))