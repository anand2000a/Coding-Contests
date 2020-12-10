//code by - anand2000

#include<bits/stdc++.h>

#define fast ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
#define ll long long int
#define vll vector < ll >
#define vpll vector < pair < ll,ll > >
#define pb push_back
#define mp make_pair
#define fr(i,a,b) for(i=a; i<b; i++)
#define fr1(i,a,b) for(i=a; i>=b; i--)
#define inf LLONG_MAX

using namespace std;


/*-------Code Goes Here-------*/

ll mypower(ll n)
{
	ll m=1;
	while(n)
	{
		m*=2;
		n--;
	}
	return m;
}

int main()
{
	fast;
	ll t,i;
	t=1;
	fr(i,0,t)
	{
		ll n;
		cin>>n;
		vector < ll > arr(n);
		ll j;
		fr(j,0,n)
		cin>>arr[j];
		ll q;
		cin>>q;
		sort(arr.begin(),arr.end());
		ll x;
		fr(j,0,q)
		{
			cin>>x;
			auto ans =upper_bound(arr.begin(),arr.end(),x);
			if(x<arr[0])
			{
				cout<<"0\n";
				continue;	
			}
			if(x>arr[n-1])
			{
				cout<<n<<"\n";
				continue;
			}
			cout<<ans-arr.begin()<<"\n";
				
		}
	}
	return 0;
}


