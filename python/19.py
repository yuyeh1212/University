# EXAMPLE(list)

a_list = [9, 5, 7, 0]
b_list = [5, 4, 6, 2, 9, 7]
for i in b_list:
    print(i*3)

length = len(b_list)
print(length)

c_list = a_list+b_list
print(c_list)

print(c_list[1:5])
print(c_list[:6])
print(c_list[6:])
print(c_list[0:8:2])
print(c_list[-2:])
print(c_list[:-3])

print(9 in c_list)
print(9 not in c_list)
print(1 in c_list)
print(1 not in c_list)

c_list.append(1)
print(c_list)

c_list.append("Hello")
print(c_list)

c_list.append(3.6)
print(c_list)

c_list.insert(1, "world")
print(c_list)
