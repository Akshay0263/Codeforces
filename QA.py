t = int(input())
for q in range(t):
    n = int(input())
    l = sorted([int(x) for x in input().split()])
    #i is liars
    ist = False
    ans = []
    for i in range(n+1):
        if l.count(i) == n-i:
            print(i)
            ist = True
            break
    if ist == False: 
        print(-1)












    """for i in range(n+1): 
        ans.extend([i]*(n-i))
        if any(i in ans for i in l):
            for q in range(i):
                for w in range(n+1):
                    lwork+=[w]    
                    if t == i: continue
            sorted(lwork)
            if lwork == l:
                print(i) """
                
                

