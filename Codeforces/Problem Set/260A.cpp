#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, n;
    cin >> a >> b >> n;
    int x = 9;
    while (x > -1)
    {
        int ok = a * 10 + x;
        if (ok % b == 0)
        {
            a = ok;
            break;
        }
        x--;
    }
    if (a % b != 0)
        cout << "-1";

    else
    {
        cout << a;
        for (int i = 1; i < n; i++)
            cout << 0;
    }
}