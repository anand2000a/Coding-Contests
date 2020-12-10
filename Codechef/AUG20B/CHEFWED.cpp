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
#define vi vector<int>
#define vpll vector<pair<ll, ll>>
#define pb push_back
#define mp make_pair
#define fr(i, a, b) for (i = a; i < b; i++)
#define fr1(i, a, b) for (i = a; i >= b; i--)
#define inf LLONG_MAX
#define msort(v) sort(v.begin(), v.end())
#define mii map<int, int>

/*-------Code Goes Here-------*/

int main()
{
	fast;
	ll t;
	t = 1;
	cin >> t;
	vll v;
	while (t--)
	{
		ll n, k;
		int i, j;
		cin >> n >> k;
		vi arr(n);
		fr(i, 0, n)
				cin >>
			arr[i];
		if (k == 1)
		{
			int ans = 1;
			int a[10001] = {0};
			a[arr[0]] = 1;
			fr(i, 1, n)
			{
				if (a[arr[i]] == 1)
				{
					ans++;
					memset(a, 0, 10001);
				}
				a[arr[i]] = 1;
			}
			cout << ans << endl;
		}
		else
		{
			bool flag = 1;
			vector<vector<ll>> segment;
			segment.pb({0, n - 1});
			unordered_map<int, int> m;
			int ans = k;
			fr(j, 0, n)
			{
				if (m[arr[j]] > 0)
				{
					if (m[arr[j]] == 1)
						ans += 2;
					else
						ans++;
					m[arr[j]]++;
				}
				else
					m[arr[j]] = 1;
			}
			while (flag)
			{
				flag = 0;
				vector<vector<ll>> temp;
				for (auto i : segment)
				{
					int l = i[0], r = i[1], cnt = k;
					vector<vector<int>> list;
					unordered_map<int, int> left, right;
					fr(j, l, r + 1)
					{
						if (right[arr[j]] > 0)
						{
							if (right[arr[j]] == 1)
								cnt += 2;
							else
								cnt++;
							right[arr[j]]++;
						}
						else
							right[arr[j]] = 1;
					}
					int cnt1 = cnt;
					fr(j, l, r + 1)
					{
						if (right[arr[j]] > 2)
						{
							right[arr[j]]--;
							cnt--;
						}
						else if (right[arr[j]] == 2)
						{
							right[arr[j]]--;
							cnt -= 2;
						}
						else
							right[arr[j]]--;
						if (left[arr[j]] > 0)
						{
							if (left[arr[j]] == 1)
								cnt += 2;
							else
								cnt++;
							left[arr[j]]++;
						}
						else
							left[arr[j]] = 1;
						if (cnt + k <= cnt1)
						{
							flag = 1;
							list.pb({cnt, j});
						}
					}
					if (list.size())
					{
						vi xx;
						msort(list);
						xx = list[0];
						temp.pb({l, xx[1]});
						temp.pb({xx[1] + 1, r});
						ans -= cnt1 - xx[0] - k;
					}
				}
				segment = temp;
			}
			cout << ans << endl;
		}
	}
	return 0;
}
