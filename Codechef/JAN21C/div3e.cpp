#include <bits/stdc++.h>
using namespace std;
#define ll long long int
ll nottrue = LLONG_MAX, n, k;
void solve_subtask1(vector<ll> v, int index, ll a, ll b)
{
    if (a >= k && b >= k)
    {
        if (nottrue > index)
            nottrue = index;
        return;
    }
    if (index == n + 1 || index > nottrue)
        return;
    if (b >= a)
    {
        solve_subtask1(v, index + 1, a + v[index - 1], b);
        solve_subtask1(v, index + 1, a, b + v[index - 1]);
    }
    else
    {
        solve_subtask1(v, index + 1, a, b + v[index - 1]);
        solve_subtask1(v, index + 1, a + v[index - 1], b);
    }
    return;
}

int main()
{
    int t;
    cin >> t;
    for (; t > 0; t--)
    {

        cin >> n >> k;
        vector<ll> arr(n);
        ll i, sum_of_all_box = 0, count_greater_than_k = 0;
        for (i = 0; i < n; i++)
        {
            cin >> arr[i];
            sum_of_all_box += arr[i];
            if (arr[i] >= k)
                count_greater_than_k++;
        }
        if (count_greater_than_k >= 2)
        {
            cout << "2" << endl;
            continue;
        }
        if (sum_of_all_box < 2 * k)
        {
            cout << "-1" << endl;
            continue;
        }
        sort(arr.begin(), arr.end(), greater<int>());
        if (n <= 100)
        {
            nottrue = LLONG_MAX;
            solve_subtask1(arr, 1, 0, 0);
            if (nottrue == LLONG_MAX)
                cout << -1 << "\n";
            else
                cout << nottrue - 1 << "\n";

            continue;
        }
        ll asum = 0, bsum = 0, ans = 0;
        vector<int> index(n, 0);
        for (i = 0; i < n; i++)
        {
            if (asum >= k)
                break;
            if (asum + arr[i] <= k)
            {
                asum += arr[i];
                index[i] = 1;
                ans += 1;
            }
        }
        if (asum != k)
        {

            index[n - 1] = 1;
            asum += arr[n - 1];
            ans += 1;
        }
        if (asum == k)
        {
            for (i = 0; i < n; i++)
            {
                if (index[i] != 0)
                    continue;
                if (bsum >= k)
                    break;
                bsum += arr[i];
                ans++;
            }
            if (bsum >= k)
                cout << ans << "\n";
            else
                cout << "-1\n";
            continue;
        }
    }
    return 0;
}
