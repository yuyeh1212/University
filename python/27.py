# 用list含dict來計算成績

student_list = list()
keepgoing = "y"
while True:
    option = input(
        "1.type student information\n2.Query a student information\n")
    if option == "1":
        keepgoing1 = "y"
        while keepgoing1 == "y":
            name = input("please type name:")
            math = int(input("please type math score:"))
            english = int(input("please type english score:"))
            chinese = int(input("please type chinese score:"))
            student_dict = {"name": name,
                            "math": math,
                            "english": english,
                            "chinese": chinese
                            }
            student_list.append(student_dict)
            keepgoing1 = input("want to keep going(y/n)?")
    if option == "2":
        while keepgoing == "y":
            while True:
                query = input("Quert who?")

                found = False
                for student_dict in student_list:
                    if student_dict["name"] == query:
                        found = True
                        print("math score:{}\nenglish score:{}\nchinese score:{}".format(
                            student_dict["math"], student_dict["english"], student_dict["chinese"]))
                        print("avarage:{}".format(
                            (student_dict["math"]+student_dict["english"]+student_dict["chinese"])/3))
                break
            keepgoing = input("want to keep going(y/n)?")
