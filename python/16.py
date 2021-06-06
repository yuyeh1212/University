# 擲骰子6000次並記錄點數出現次數

import random


def main():
    one = 0
    two = 0
    three = 0
    four = 0
    five = 0
    six = 0
    for i in range(6000):
        number = random.randint(1, 6)
        if number == 6:
            one += 1
        elif number == 5:
            two += 1
        elif number == 4:
            three += 1
        elif number == 3:
            four += 1
        elif number == 2:
            five += 1
        else:
            six += 1
    print("1 : {}".format(one))
    print("2 : {}".format(two))
    print("3 : {}".format(three))
    print("4 : {}".format(four))
    print("5 : {}".format(five))
    print("6 : {}".format(six))


main()
