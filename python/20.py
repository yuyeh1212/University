# 輸入list並比大小

from collections import Counter
a_list = []
num = int(input("please type num:"))
while num != -100:
    max = num
    min = num
    a_list.append(num)
    print(a_list)
    num = int(input("please type num:"))
for i in a_list:
    if max < i:
        max = i
    elif min > i:
        min = i
print(max, min)

a_list.sort()
print(a_list)
a_list.sort(reverse=True)
print(a_list)

a_list = Counter(a_list)
top = a_list.most_common(1)
print(top)

b_list.remove(1)
print(b_list)

b_list.pop(2)
print(b_list)

c_list = b_list
c_list[0] = 30
print(b_list)
print(c_list)

d_list = []+b_list
d_list[0] = 40
print(d_list)
