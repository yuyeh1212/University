# 用def做四則運算

def add_func(x, y):
    print(x+y)


def sub_func(x, y):
    print(x-y)


def mul_func(x, y):
    print(x*y)


def div_func(x, y):
    print(x/y)


def main():
    selection_dict = {"add": add_func,
                      "sub": sub_func,
                      "mul": mul_func,
                      "div": div_func
                      }
    x = int(input("please type x number:"))
    y = int(input("please type y number:"))
    user_choice = input("add/sub/mul/div?")
    selection_dict[user_choice](x, y)


main()
