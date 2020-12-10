#include <bits/stdc++.h>
using namespace std;
#define fast                      \
    ios_base::sync_with_stdio(0); \
    cin.tie(NULL);                \
    cout.tie(NULL);
int main()
{
    fast;
    int t;
    cin >> t;
    while (t--)
    {
        double n;
        cin >> n;
        int i;
        for (i = 1; i <= n; i++)
            if (int(i) % 4 == 1 || int(i) % 4 == 2)
                cout << "0\n";
            else
                cout << setprecision(20) << (ceil(i / 4.0)) + 1 << "\n";
    }

    return 0;
}