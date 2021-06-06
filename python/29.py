# 輸入檔案查詢球隊冠軍次數以及冠軍年分

file = open('WorldSeriesWinners.txt', 'r+')
d = dict()
x = []
a = '1'
while(a != ""):
    a = file.readline()
    a = a.strip()
    x.append(a)
# 設定年分
k = 1903
for i in range(0, 112):
    if k == 1904 or k == 1994:
        k += 1
    d[k] = x[i]
    k += 1

name = input("輸入隊伍名稱: ")
g = []
for key in d:
    if d[key] == name:
        g.append(key)
print(g)

time = int(input("輸入冠軍次數: "))
times = dict()
h = []
for key in x:
    times[key] = times.get(key, 0) + 1
# print(times)
for key in times:
    if times[key] == time:
        h.append(key)
if h != []:
    print(h)
elif h == []:
    print("沒有冠軍隊伍得過{}次冠軍".format(time))
