# list選單算成績

n = list()
keepgoing = "y"
while True:
    option = input("1.type student information\n2.Query a student information")
    if option == "1":
        keepgoing1 = "y"
        while keepgoing1 == "y":
            nn = []
            name = input("please type name:")
            while True:
                score = int(input("please type score:"))
                if score == -1:
                    break
                else:
                    nn.append(score)
            n.append([name, nn])
            keepgoing1 = input("want to keep going(y/n)?")
    if option == "2":
        if len(n) == 0:
            print("append some data", end="\n")
            keepgoing = "y"
        while keepgoing == "y":
            while True:
                query = input("Quert who?")

                found = False
                for i in n:
                    if query == i[0]:
                        found = True
                        print("Name:{}".format(i[0]), end="\n")
                        print("Score:{}".format(i[1]), end="\n")
                        print("Averge:{}".format(
                            sum(i[1])/len(i[1])), end="\n")
                break
            keepgoing = input("want to keep going(y/n)?")
