#include<bits/stdc++.h>

#define fast ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
#define ll long long int
#define vll vector<ll>
#define vpll vector<pair<ll,ll>>
#define pb push_back
#define fr(i,a,b) for(i=a; i<b; i++)
#define fr1(i,a,b) for(i=a; i>=b; i--)

using namespace std;

int main()
{
	fast;
	ll t=1,i;
	//cin>>t;
	fr(i,0,t)
	{
		
		ll n;
		cin>>n;
		vll a,b,c;
		a.resize(n);
		b.resize(n);
		c.resize(n);
		ll j;
		fr(j,0,n)
		cin>>a[j];
		fr(j,0,n)
		cin>>b[j];
		ll k,count=0;
		fr(j,0,n)
		c[j]=a[j]-b[j];
		sort(c.begin(),c.end());				
		fr(j,0,n)
		{
			if(c[j]<=0)
			continue;
			int pos=lower_bound(c.begin(),c.end(),-c[j]+1)-c.begin();
			count+=j-pos;
		}
		cout<<count;
	}
	return 0;
}
