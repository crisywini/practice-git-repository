n = int(input())
dic = {}
for i in range(n):
    str_ = input()
    str_list = str_.split(' ')

    dic[str_list[0]] = str_list[1]
for i in range(n):
    str_ = input()
    if dic.get(str_):
        print(str_+"="+dic[str_])
    else:
        print("Not found")
