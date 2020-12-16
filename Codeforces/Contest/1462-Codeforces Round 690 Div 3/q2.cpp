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
	cin >> t;
	while (t--)
	{
		int n;
		cin>>n;
		string str;
		cin>>str;
		
		if(n<4)
		{
			cout<<"NO\n";
			continue;
		}
		if(str[0]=='2'&&str[1]=='0'&&str[2]=='2'&&str[3]=='0')
		{
			cout<<"YES\n";
			continue;
		}
		if(str[n-1]=='0'&&str[n-2]=='2'&&str[n-3]=='0'&&str[n-4]=='2')
		{
			cout<<"YES\n";
			continue;
		}
		if(str[0]!='2'||str[n-1]!='0')
		{
			cout<<"NO\n";
			continue;
		}
		if(str[1]=='0'&&str[n-2]=='2')
		
		{
			cout<<"YES\n";
			continue;
		}
		else if(str[n-2]=='2'&&str[n-3]=='0')
		{
			cout<<"YES\n";
			continue;
		}
		else if(str[2]=='2'&&str[1]=='0')
		{
			cout<<"YES\n";
			continue;
		}
		else 
		cout<<"NO\n";
	}
}
