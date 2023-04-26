t = int(input())

for i in range(t):
    n = int(input())
    stri = input()
    print(stri)
    while stri[0]=="1" and stri[-1]=="0":
        stri = stri[1:-1]
        print(stri)
        if stri == "10":print("ayo");stri = ''; break
    while stri[0]=="0" and stri[-1]=="1":
        stri = stri[1:-1]
        print(stri)
        if stri == "01": stri = ''; break
    print(len(stri), 'ans')

