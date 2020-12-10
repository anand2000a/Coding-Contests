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
		ll n;
		cin>>n;
		ll arr[n];
		ll j;
		
		fr(j,0,n)
			cin>>arr[j];
		ll k;
		ll count=n*(n+1)/2;
		ll ans;
		fr(j,0,n)
		{
			ll min=j,max=j;
			if(arr[j]%2==0&&arr[j]%4!=0)
			{
				k=j-1;
				while(k>=0&&arr[k]%2!=0)
				{
					min=k;	
					k--;
				}
					
				min=j-min+1;
				k=j+1;
				while(k<n&&arr[k]%2!=0)
				{
					max=k;	
					k++;
				}
				max=max-j+1;
				ans=max*min;
				count-=ans;
//				cout<<count<<" min "<<min<<" j "<<j<<"\n";
//				cout<<count<<" max"<<max<<"\n";
			}
				
		}
		cout<<count<<"\n";
			
	}
	return 0;
}
// 1 7 2 3 5 9 6 7 8 
