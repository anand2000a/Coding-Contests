#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for (; t > 0; t--)
    {
        int n, m;
        cin >> n >> m;
        vector<int> a(n), b(m);
        int i;
        int as = 0;
        for (i = 0; i < n; i++)
        {
            cin >> a[i];
            as += a[i];
        }
        int bs = 0;
        for (i = 0; i < m; i++)
        {
            cin >> b[i];
            bs += b[i];
        }
        sort(a.begin(), a.end());
        sort(b.begin(), b.end(), greater<int>());
        if (as > bs)
        {
            cout << "0" << endl;
            continue;
        }
        if (b[0] < a[0])
        {
            cout << "-1" << endl;
            continue;
        }
        bool flag = false;
        int ans = 0;
        i = 0;
        while (flag == false && i < n && i < m)
        {
            if (a[i] >= b[i])
                break;
            as -= a[i];
            bs -= b[i];
            int temp = a[i];
            a[i] = b[i];
            b[i] = temp;
            ans++;
            as += a[i];
            bs += b[i];
            if (as > bs)
            {
                flag = true;
                break;
            }
            i++;
        }
        if (flag)
            cout << ans << endl;
        else
            cout << "-1" << endl;
    }
    return 0;
}
