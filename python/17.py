# 終極密碼

import random
number = random.randint(1, 100)
low = 1
high = 100
play = True


def lower():
    print("太小")


def higher():
    print("太大")


while (play):

    guess = int(input("請輸入{}-{}的數字:".format(low, high)))
    if guess == number:
        print("恭喜答對")
        keep = input("是否還要繼續遊玩?y/n:")
        if keep == "y":
            low = 1
            high = 100
        if keep == "n":
            break
    elif guess < number:
        if guess < low:
            print("你輸入的數字太小")
            continue
        low = guess
        lower()
        continue

    elif guess > number:
        if guess > high:
            print("你輸入的數字太大")
            continue
        high = guess
        higher()
        continue

    elif guess > high:
        print("你輸入的數字太小")
