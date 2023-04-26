t = int(input())

for i in range(t):
    n = int(input())
    stri = input()
#    print(stri)
    while len(stri)>0 :
        if (stri[0]=="1" and stri[-1]=="0") or (stri[0]=="0" and stri[-1]=="1"):
            stri = stri[1:-1]
#           print(stri)
        else: break
    print(len(stri))

