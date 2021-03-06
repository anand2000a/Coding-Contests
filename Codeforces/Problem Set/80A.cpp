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
bool isPrime(int a)
{
    int i;
    if (a < 2)
        return false;
    if (a == 2 || a == 3)
        return true;
    for (i = 5; i < sqrt(a); i += 2)
        if (a % i == 0)
            return false;
    return true;
}
int main()
{
    fast;
    ll t;
    t = 1;
    // cin >> t;
    while (t--)
    {
        int n, m, i;
        cin >> n >> m;
        if (isPrime(n) && isPrime(m))
        {
            fr(i, n + 1, m) if (isPrime(i))
            {
                cout << "NO";
                break;
            }
            if (i == m)
                cout << "YES";
        }
        else
        {
            cout << "NO";
        }
    }
    return 0;
}
