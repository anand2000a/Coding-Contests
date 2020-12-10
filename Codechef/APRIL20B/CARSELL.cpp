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
#define MOD			10e9+7

/*-------Code Goes Here-------*/

int main()
{
	fast;
	ll t,i;
	cin>>t;
	fr(i,0,t)
	{
		int n,j;
		cin>>n;
		int arr[n];
		fr(j,0,n)
		cin>>arr[j];
		sort(arr,arr+n);
		int ans=0;
		int k=0;
		fr1(j,n-1,0)
		{
			ans+=max(0,arr[j]-k);
			k++;
			ans=ans%1000000007;
		}
		cout<<ans<<"\n";			
	}
	return 0;
}

