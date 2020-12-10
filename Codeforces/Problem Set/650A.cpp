//code by - anand2000
//date - 15th April 2020

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
	ll t;
	t=1;
//	cin>>t;
	while(t--)
	{
		ll n,j;	
		map < int , int > x;
		map < int , int > y;
		map < pair < int , int > , int > xy;
		cin>>n;
		ll ans=0;
		int xx,yy;
		fr(j,0,n)
		{
			cin>>xx>>yy;
			x[xx]++;
			y[yy]++;
			xy[mp(xx,yy)]++;
			ans+=x[xx]+y[yy]-xy[mp(xx,yy)];
		}
		cout<<ans-n;;
	}
	return 0;
}

