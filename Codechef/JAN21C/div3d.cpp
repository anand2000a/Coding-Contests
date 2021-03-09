#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for (; t > 0; t--)
    {
        int n, k, a, b;
        cin >> n >> k >> a >> b;
        if (a == b)
        {
            cout << n << " " << n << endl;
            continue;
        }
        vector<pair<int, int>> point_of_impact;
        if (a < b)
            point_of_impact.insert(point_of_impact.end(), {{a + n - b, n}, {n, a + n - b}, {b - a, 0}, {0, b - a}});
        else
            point_of_impact.insert(point_of_impact.end(), {{n, b + n - a}, {b + n - a, n}, {0, a - b}, {a - b, 0}});
        cout << point_of_impact[(k - 1) % 4].first << " " << point_of_impact[(k - 1) % 4].second << endl;
    }
    return 0;
}
