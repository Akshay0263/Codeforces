n = int(input())
coord = [0,0]
for i in range(n):
    l = int(input())
    word = input()
    for j in range(l):
        if word[j]=='U': coord[1]+=1
        if word[j]=='D': coord[1]-=1
        if word[j]=='L': coord[0]+=1
        if word[j]=='R': coord[0]+=1
        if coord == [1,1]:
            print("YES")
            break
    print("NO")

    
