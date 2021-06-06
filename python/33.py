# 錯誤排除

keepgoing = "y"
while keepgoing == 'y':
    try:
        a = float(input("請輸入浮點數:"))
        b = float(input("請輸入浮點數:"))
    except Exception as e:
        print("input error{}".format(e))
    else:
        print(a+b)
    finally:
        keepgoing = input("want to keep going(y/n)?")
