import math

for t in range(int(input())):
    n = int(input())
    w = list(map(int, input().split()))
    l = list(map(int, input().split()))

    d = {}
    ans = 0

    for i in range(1, n+1):
        d[i] = w.index(i)

    for i in range(2, n+1):
        x = d[i]
        y = d[i-1]

        temp = 0

        if x <= y:
            temp = (math.ceil((y+1-x)/l[x]))

        ans += temp
        d[i] += temp*(l[x])
    print(ans)
