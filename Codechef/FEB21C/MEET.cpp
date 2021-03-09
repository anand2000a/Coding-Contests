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
#define ig cin.ignore()

/*-------Code Goes Here-------*/

int time_to_int(string time_string)
{
    if (time_string[0] == '1' && time_string[1] == '2')
    {
        time_string[0] = '0';
        time_string[1] = '0';
    }
    int time = 0;
    if (time_string[6] == 'P')
        time += 12 * 60;
    time = time + 60 * (int(time_string[0] - 48) * 10 + int(time_string[1] - 48)) + int(time_string[3] - 48) * 10 + int(time_string[4] - 48);
    return time;
}
int time_to_int2(string time_string)
{
    if (time_string[9] == '1' && time_string[10] == '2')
    {
        time_string[9] = '0';
        time_string[10] = '0';
    }
    int time = 0;
    if (time_string[15] == 'P')
        time += 12 * 60;
    time = time + 60 * (int(time_string[9] - 48) * 10 + int(time_string[10] - 48)) + int(time_string[12] - 48) * 10 + int(time_string[13] - 48);
    return time;
}

int main()
{
    fast;
    ll t;
    t = 1;
    cin >> t;
    ig;
    while (t--)
    {
        string time;
        getline(cin, time);
        int meet_time = time_to_int(time);
        int n, i;
        cin >> n;
        ig;
        string ans = "";
        fr(i, 0, n)
        {
            getline(cin, time);
            int timeL = time_to_int(time);
            int timeR = time_to_int2(time);
            if (meet_time >= timeL && meet_time <= timeR)
                ans += '1';
            else
                ans += '0';
        }
        cout << ans << "\n";
    }
    return 0;
}
