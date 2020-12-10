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
		ll n,j;	
		cin>>n;
		int x,y,z;
		int xx=0,yy=0,zz=0;
		fr(j,0,n)
		{
			cin>>x>>y>>z;
			xx+=x;
			yy+=y;
			zz+=z;
		}
		if(!xx&&!yy&&!zz)
		cout<<"YES";
		else
		cout<<"NO";
	}
	return 0;
}
