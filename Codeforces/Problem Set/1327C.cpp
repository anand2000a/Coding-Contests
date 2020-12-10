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
		ll n,m,k;
		cin>>n>>m>>k;
		ll j,a,b;
		fr(j,0,k)
			cin>>a>>b;
		ll sum=m-1+n-1+m*n-1;
		cout<<sum<<"\n";
		fr(j,0,m-1)
		cout<<"L";
		fr(j,0,n-1)
		cout<<"U";
		ll row=0;
		while(row<=n)
		{
			fr(j,0,m-1)
			cout<<"R";
			row++;
			if(row>=n)
			break;
			cout<<"D";
			fr1(j,m-1,1)
			cout<<"L";
			row++;
			if(row>=n)
			break;
			cout<<"D";
			
		}
		
	}
	return 0;
}

