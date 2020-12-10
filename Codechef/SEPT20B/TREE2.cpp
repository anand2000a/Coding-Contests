#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, i;
        cin >> n;
        unordered_set<int> s;
        s.clear();
        int t;
        for (i = 0; i < n; i++)
        {
            cin >> t;
            if (t)
                s.insert(t);
        }

        cout << s.size() << "\n";
    }
    return 0;
}