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
//	cin>>t;
	while(t--)
	{
		int n,s;
		cin>>s>>n;
		int j;
		ll a,b;
		vpll ans;
		fr(j,0,n)
		{
			cin>>a>>b;
			ans.pb(mp(a,b));
			
		}
		sort(ans.begin(),ans.end());
		int ok=true;
		fr(j,0,n)
		{
			if(ans[j].first<s)
			s+=ans[j].second;
			else
			{
				ok=false;
				break;
			}
		}
		if(ok)
		cout<<"YES";
		else
		cout<<"NO";
	}
	return 0;
}
