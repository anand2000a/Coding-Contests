//code by - anand2000

#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
using namespace std;
using namespace __gnu_pbds;


#define fast 		ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
#define ll  		long long int
#define vll 		vector < ll >
#define vpll 		vector < pair < ll,ll > >
#define pb 			push_back
#define mp 			make_pair
#define fr(i,a,b) 	for(i=a; i<b; i++)
#define fr1(i,a,b) 	for(i=a; i>=b; i--)
#define inf 		LLONG_MAX
#define first		fi
#define second		se


/*-------Code Goes Here-------*/

int main()
{
	fast;
	ll t;
	t=1;
//	cin>>t;
	while(t--)
	{
		int n,m;
		double a,b;
		cin>>n>>m>>a>>b;
		if(b/m<a)
		{
			if(n%m==0)
			{
				int ans=(n/m)*b;
				cout<<ans;
			}
			else
			{
				int ans=n/m;
				ans*=b;
				int left=n%m;
				ans+=min(left*a,b);
				cout<<ans;
			}
		}
		else
		{
			cout<<int(n*a);
		}
	}
	return 0;
}
