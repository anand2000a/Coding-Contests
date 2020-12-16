//code by - anand2000

#include<bits/stdc++.h>
//#include<ext/pb_ds/assoc_container.hpp>
using namespace std;
//using namespace __gnu_pbds;


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
	ll t;
	t=1;
	vll v;
	int k;
	fr(k,0,29)
	v.pb(pow(2,k+2)-1);
	cin>>t;
	while(t--)
	{
		ll n,j;	
		
		cin>>n;
		vll v;
		ll e=0,o=0;
		ll tp=n/2;
		if(tp%2!=0)
		cout<<"NO\n";
		else
		{
			fr(j,0,tp)
			v.pb(2*(j+1));
			int x=1;
			while(o!=tp)
			{
				if(x==n-1)
				{
					break;
						
				}
				
				else
				{
					v.pb(x);
					x+=2;
					o++;
				}
			}
			ll mn=(tp+1)*tp;
			ll sq = tp-1;
			sq*=sq;
			v.pb(mn-sq);
			cout<<"YES\n";
			fr(j,0,n)
			cout<<v[j]<<" ";
			cout<<"\n";
		}
	}
	return 0;
}
