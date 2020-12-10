//code by - anand2000

#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
using namespace std;
using namespace __gnu_pbds;

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
#define first fi
#define second se

/*-------Code Goes Here-------*/
int check(int n)
{
    map<int, int> m;
    while (n)
    {
        int x = n % 10;
        m[x]++;
        if (m[x] > 1)
            return 0;
        n /= 10;
    }
    return 1;
}
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
        for (int i = n + 1; i <= 10000; i++)
            if (check(i) == 1)
            {
                cout << i;
                break;
            }
    }
    return 0;
}
