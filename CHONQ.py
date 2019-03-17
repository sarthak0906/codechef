t = int(input())
while t:
    t = t - 1
    n,k = input().split(" ")
    n = int(n)
    k = int(k)
    f = 0
    s = list(map(int,input().split()))
    for i in range(n):
        ans,dev = 0,1
        for j in range(i,n):
            ans += s[j]//dev
            dev += 1
        if ans <= k:
            print(i+1)
            f = 1
            break
    
    if f == 0:
        print(n+1)