# example(dict)

info = dict()
info = {
    "ID": 3,
    "score": 50
}
print(info)

info["ID"] = 5
print(info)

info["avarage"] = 4
print(info)

del info["ID"]
print(info)

print(info["score"])

print(info.get("ID", -1))

for key in info:
    print(key, info[key])
