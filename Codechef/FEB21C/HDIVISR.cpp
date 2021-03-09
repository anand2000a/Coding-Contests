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
    // cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int ans = 10;
        while (ans > 0)
        {
            if (n % ans == 0)
                break;
            ans--;
        }
        cout << ans;
    }
    return 0;
}
