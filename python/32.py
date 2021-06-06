# 四則運算除錯

def add_func(a, b):
    print(a+b)


def sub_func(a, b):
    print(a-b)


def mul_func(a, b):
    print(a*b)


def div_func(a, b):
    print(a/b)


def main():
    selection_dict = {"add": add_func,
                      "sub": sub_func,
                      "mul": mul_func,
                      "div": div_func
                      }
    play = True
    while play:
        try:
            user_choice = input("add/sub/mul/div?")
            fc = selection_dict[user_choice]
            a = float(input("please type number:"))
            b = float(input("please type number:"))
            fc(a, b)
        except KeyError as e:
            print("指定的key不存在{}".format(e))
        except Exception as e:
            print("非系統運作錯誤{}".format(e))
        except ArithmeticError as e:
            print("數學運算錯誤{}".format(e))
        except BaseException as e:
            print("所有例外錯誤{}".format(e))
        except TypeError as e:
            print("TypeError{}".format(e))
        except ValueError as e:
            print("ValueError{}".format(e))
        finally:
            keepgoing = input("want to keep going(y/n)?")
            while True:
                if keepgoing == 'y':
                    play = True
                    break
                elif keepgoing == 'n':
                    play = False
                    break
                else:
                    print("keepgoing KeyError")
                    keepgoing = input("want to keep going(y/n)?")


main()
