n = int(input())

for i in range(n):
    coord = [0,0]
    l = int(input())
    word = input()
    for j in range(l):
        if word[j]=='U': coord[1]+=1
        if word[j]=='D': coord[1]-=1
        if word[j]=='L': coord[0]+=1
        if word[j]=='R': coord[0]+=1
#        print(word[j],"+", coord)

        if coord == [1,1]:
            print("YES")
            break
    if coord != [1,1]: print("NO")

    
