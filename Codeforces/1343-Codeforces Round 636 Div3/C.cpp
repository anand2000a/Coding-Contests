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
	cin>>t;
	while(t--)
	{
		ll n,j;	
		
		cin>>n;
		vector < int > v(n);
		fr(j,0,n)
		cin>>v[j];
		int minus=0,plus=0;
		if(v[0]<0)
		{
			minus=1;
			plus=0;
		}
		else
		{
			minus=0;
			plus=1;
		}
		ll sum=0;
		fr(j,0,n)
		{
			if(minus)
			{
				int currmax=v[j];
				while(v[j]<0&&j<n)
				{
					currmax=max(currmax,v[j]);
					j++;
				}	
//				cout<<currmax<<" ";
				sum+=currmax;
				minus=0;
				plus=1;
				j--;
			}	
			else if(plus)
			{
				int currmax=v[j];
				while(v[j]>0&&j<n)
				{
					currmax=max(currmax,v[j]);
					j++;
				}	
				sum+=currmax;
//				cout<<currmax<<" ";
				minus=1;
				plus=0;
				j--;
			}
		}	
		cout<<sum<<"\n";
//		cout<<end<<"\n"<<maxi<<"\n";
	}
	return 0;
}
