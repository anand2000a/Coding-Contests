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
int play[5][5];
int main()
{
    fast;
    ll t;
    t = 1;
    // cin >> t;
    while (t--)
    {
        int i, j;
        fr(i, 0, 5)
            fr(j, 0, 5)
                play[i][j] = 0;
        fr(i, 1, 4)
        {
            fr(j, 1, 4)
            {
                cin >> play[i][j];
            }
        }

        fr(i, 1, 4)
        {
            fr(j, 1, 4)
            {
                cout << 1 - (play[i + 1][j] + play[i - 1][j] + play[i][j + 1] + play[i][j - 1] + play[i][j]) % 2;
            }
            cout << "\n";
        }
    }
    return 0;
}
