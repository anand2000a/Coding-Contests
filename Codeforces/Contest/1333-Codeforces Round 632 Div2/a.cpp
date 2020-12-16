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
	cin>>t;
	fr(i,0,t)
	{
			int a,b;
			cin>>a>>b;
			int j,k;
			fr(j,0,a)
			{
				fr(k,0,b)
				{
					if(j==a-1&&k==b-1)	
					cout<<"W";
					else
					cout<<"B";
				}
				cout<<"\n";
			}					
	}
	return 0;
}

