t = int(input())

def dig_sum(num):
    if num == '': return 0
    return int(num[0])+ dig_sum(num[1:])

#print(dig_sum('1234'))

for i in range(t):
    lol = input()
    n = int(lol.split(' ')[0])
    q = int(lol.split(' ')[1])
    a = input()
    a = a.split(' ')
    

    for j in range(q):
        query = input()
        query = query.split(' ')
        if query[0]=='1': 
            for k in range(int(query[1]),int(query[2])+1):
                a[k] = dig_sum(a[k])

        else :
            print(a[int(query[1])])
        




