// code by - anand2000
#include <bits/stdc++.h>
// #include <ext/pb_ds/assoc_container.hpp>
using namespace std;
// using namespace __gnu_pbds;

#define fast                      \
    ios_base::sync_with_stdio(0); \
    cin.tie(NULL);                \
    cout.tie(NULL);
#define ll long long int
#define vll vector<ll>
#define vii vector<int>
#define vpll vector<pair<ll, ll>>
#define pb push_back
#define mp make_pair
#define all(v) v.begin(), v.end()
#define fr(i, a, b) for (i = a; i < b; i++)
#define fr1(i, a, b) for (i = a; i >= b; i--)
#define inf LLONG_MAX
#define fi first
#define se second

/*-------Code Goes Here-------*/

int main()
{
    fast;
    ll t;
    t = 1;
    cin >> t;
    while (t--)
    {
        int n, i;
        cin >> n;
        vll arr(n);
        fr(i, 0, n)
                cin >>
            arr[i];
        ll ans;
        sort(all(arr));
        ans = abs(arr[0] - arr[1]) + abs(arr[1] - arr[n - 1]) + abs(arr[n - 1] - arr[0]);
        ans = max(ans, abs(arr[0] - arr[n - 1]) + abs(arr[n - 1] - arr[0]));
        ans = max(ans, abs(arr[1] - arr[n - 1]) + abs(arr[n - 1] - arr[1]));
        cout << ans << endl;
    }
    return 0;
}
