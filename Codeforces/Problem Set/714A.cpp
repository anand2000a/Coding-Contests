//code by - anand2000

#include<bits/stdc++.h>
using namespace std;

#define fast 		ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
#define ll  		long long int
#define vll 		vector < ll >
#define vpll 		vector < pair < ll,ll > >
#define pb 			push_back
#define mp 			make_pair
#define fr(i,a,b) 	for(i=a; i<b; i++)
#define fr1(i,a,b) 	for(i=a; i>=b; i--)
#define inf 		LLONG_MAX


/*-------Code Goes Here-------*/

int main()
{
	fast;
	ll t,i;
	t=1;
	fr(i,0,t)
	{
		ll a,b,c,d,e;
		cin>>a>>b>>c>>d>>e;
		ll ans;
		if(c>b||d<a)
		cout<<0;
		else
		{
			if (d<=b)
			{
				if(c<a)
				{
					ans=d-a+1;
					if(e>=a&&e<=d)
					ans-=1;
				}
				else
				{
					ans=d-c+1;
					if(e>=c&&e<=d)
					ans-=1;
				}
			}
			else
			{
				if(c<a)
				{
					ans=b-a+1;
					if(e>=a&&e<=b)
					ans-=1;
				}
				else
				{
					ans=b-c+1;
					if(e>=c&&e<=b)
					ans-=1;
				}
			}
			
			cout<<ans;
		}
	}
	return 0;
}

