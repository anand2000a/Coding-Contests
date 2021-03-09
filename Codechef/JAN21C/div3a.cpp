#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for (; t > 0; t--)
    {
        int n;
        cin >> n;
        int k;
        cin >> k;
        int d;
        cin >> d;
        int i;
        vector<int> arr(n, 0);
        long long sum = 0;
        for (i = 0; i < n; i++)
        {
            cin >> arr[i];
            sum += arr[i];
        }
        if ((sum / k) < d)
            d = sum / k;
        cout << d << "\n";
    }
    return 0;
}
