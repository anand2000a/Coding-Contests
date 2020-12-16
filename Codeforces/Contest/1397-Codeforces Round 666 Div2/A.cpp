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
// #define first fi
// #define second se

/*-------Code Goes Here-------*/

int main()
{
	fast;
	ll t;
	t = 1;
	cin >> t;

	while (t--)
	{
		map<char, int> mp;
		int n, i;
		cin >> n;
		vector<string> vs;
		string s;
		fr(i, 0, n)
		{
			cin >> s;
			vs.pb(s);
		}
		for (i = 0; i < n; i++)
		{
			int j = 0;
			int mm = vs[i].size();
			while (j != mm)
			{
				mp[vs[i][j]]++;
				j++;
			}
		}
		// auto x = mp.begin();
		int flag = 1;
		for (auto x : mp)
			if ((x.second) % n != 0)
			{
				flag = 0;
				break;
			}
		if (flag)
			cout << "YES\n";
		else
		{
			cout << "NO\n";
		}
	}
	return 0;
}
