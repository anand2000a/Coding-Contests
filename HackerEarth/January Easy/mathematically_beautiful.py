import math
t = int(input())
for i in range(t):
    n,x=map(int,input().split())
    p=int(math.log(n,x))
    if(n==1):
        print("YES")
        continue
    while(p>=0 and n):
        po=pow(x,p)
        if(po<=n):
            n-=po
        p=p-1
        
    if(n==0):
        print("YES")
    else:
        print("NO")