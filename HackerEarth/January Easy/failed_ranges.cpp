//code by - anand2000
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
ll lmax(ll a, ll b)
{
    if (a < b)
        return b;
    else if (b < a)
        return a;
    return 0;
}

/*-------Code Goes Here-------*/

int main()
{
    fast;
    ll t;
    t = 1;
    // cin >> t;
    while (t--)
    {
        ll n, m, i, j, x, y;
        cin >> n >> m;
        vll a(n), b(m);
        fr(i, 0, n)
                cin >>
            a[i];
        fr(i, 0, m)
                cin >>
            b[i];
        cin >> x >> y;
        vector<pair<ll, pair<ll, ll>>> pr;
        for (i = 0; i < n; i++)
            for (j = 0; j < m; j++)
                pr.pb({a[i] + b[j], {i + 1, j + 1}});
        sort(pr.begin(), pr.end());
        cout << y - x - 1 << "\n";
        // for (auto mx : pr)
        //     cout << mx.fi << " " << mx.se.fi << " ";
        for (i = x; i < y - 1; i++)
            cout << "(" << pr[i].se.fi << "," << pr[i].se.se << ") ";
    }

    return 0;
}