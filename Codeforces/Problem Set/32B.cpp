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

int main()
{
    fast;
    ll t;
    t = 1;
    // cin >> t;
    while (t--)
    {
        string s, ans = "";
        cin >> s;
        int n = s.size();
        int i = 0;
        while (i < n)
        {
            if (s[i] == '.')
            {
                ans += '0';
                i++;
            }
            else if (s[i] == '-')
            {
                if (s[i + 1] == '-')
                    ans += '2';
                else
                    ans += '1';
                i += 2;
            }
        }
        cout << ans;
    }
    return 0;
}
