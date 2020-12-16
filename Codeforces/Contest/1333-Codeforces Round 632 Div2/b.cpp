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
		ll n,j,k;
		cin>>n;
		ll arr[n];
		ll arr2[n];
		int minus=n, plus=n,fm=0,fp=0;
		fr(j,0,n)
		{
			cin>>arr[j];
			if(fp==0&&arr[j]==1)
			{
				fp=1;
				plus=j;
			}
			
			if(fm==0&&arr[j]==-1)
			{
				fm=1;
				minus=j;
			}	
		}
		fr(j,0,n)
		cin>>arr2[j];
		bool ans = true;
//		cout<<plus<<" "<<minus<<"\n";
		fr1(j,n-1,1)
		{
			if(arr[j]!=arr2[j])
			{
				if(arr[j]>arr2[j]&&minus>=j)
				{
					ans=false;
					break;
				}
				if(arr[j]<arr2[j]&&plus>=j)
				{
					ans=false;
					break;
				}
			}
		}
		if(arr[0]!=arr2[0])
		ans=false;
		if(ans)
		cout<<"YES\n";
		else
		cout<<"NO\n";
		
	}
	return 0;
}

