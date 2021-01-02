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
    cin >> t;
    while (t--)
    {
        ll n, k;
        cin >> n >> k;
        unordered_set<ll> s;
        priority_queue<int> pq;
        ll i;
        vll v;
        fr(i, 0, n)
        {
            ll m;
            cin >> m;
            if (s.find(m) == s.end())
                pq.push(m);
            s.insert(m);
        }
        ll sum = 0;
        i = 0;
        while (!pq.empty() && i < k)
        {
            i++;
            sum += pq.top();
            pq.pop();
            /* code */
        }

        cout << sum << "\n";
    }
    return 0;
}
