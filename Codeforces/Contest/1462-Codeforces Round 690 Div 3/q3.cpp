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
		int arr[]={0,1,2,3,4,5,6,7,8,9,19,
		29,39,49,59,69,79,89,189,289,389,
		489,589,689,789,1789,2789,3789,4789,5789,6789,16789,26789,36789,46789,56789,156789,256789,356789,456789,1456789,2456789,3456789,13456789,23456789,123456789};
		if(n>45)
		cout<<"-1\n";
		else
		cout<<arr[n]<<"\n";
	}
}
