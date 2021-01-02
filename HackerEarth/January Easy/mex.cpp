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
#define first fi
#define second se

/*-------Code Goes Here-------*/

int main()
{
    fast;
    ll t;
    t = 1;
    cin >> t;
    while (t--)
    {
        int n, k, i, j;
        cin >> n;
        vii arr;
        unordered_set<int> stt;
        fr(i, 0, n)
        {
            int temp;
            cin >> temp;
            if (stt.find(temp) != stt.end())
                arr.pb(temp);
            stt.insert(temp);
        }
        set<int> st;
        n = arr.size();
        fr(i, 0, n)
            fr(j, i + 1, n)
                st.insert(__gcd(arr[i], arr[j]));
        i = 1;
        for (auto m : st)
        {
            if (i != m)
                break;
            i++;
        }
        cout << i << "\n";
    }
    return 0;
}
