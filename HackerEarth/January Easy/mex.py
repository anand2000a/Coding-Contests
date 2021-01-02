import math
t = int(input())
for i in range(t):
    n = int(input())
    arr = list(map(int, input().split()))
    s = list(set(arr))

    ans = set()
    for j in range(len(s)):
        for k in range(j + 1, len(s)):
            ans.add(math.gcd(s[j], s[k]))
    j = 1
    for num in ans:
        if (num != j):
            break
        j = j + 1
    print(j)
