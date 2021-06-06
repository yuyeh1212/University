# 加解密

def encryption_fun(x, y):
    strlist = list(y)
    for i in range(len(strlist)):
        if strlist[i] >= 'a' and strlist[i] <= 'z':
            if ord(strlist[i])+x <= 122:
                strlist[i] = chr(ord(strlist[i])+x)
            else:
                strlist[i] = chr((ord(strlist[i])+x) % 122+96)
    print("".join(strlist))


def decrypt_fun(x, y):
    strlist = list(y)
    for i in range(len(strlist)):
        if strlist[i] >= 'a' and strlist[i] <= 'z':
            if ord(strlist[i])-x >= 97:
                strlist[i] = chr(ord(strlist[i])-x)
            else:
                strlist[i] = chr((ord(strlist[i])-x) % 96+122)
    print("".join(strlist))


def main():
    selection_dict = {"add": encryption_fun,
                      "sub": decrypt_fun,
                      }
    x = int(input("please type offset:"))
    user_choice = input("add/sub?")
    y = str(input("please type string:"))
    selection_dict[user_choice](x, y)


main()
