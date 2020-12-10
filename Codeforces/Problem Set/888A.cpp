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
		ll n;
		cin>>n;
		int arr[n];
		int j;
		fr(j,0,n)
		cin>>arr[j];
		if(n<=2)
		{
			cout<<0;
			return 0;
		}
		int count=0;
		fr(j,1,n-1)
		{
			if(arr[j]>arr[j-1]&&arr[j]>arr[j+1])
			count++;
			if(arr[j]<arr[j-1]&&arr[j]<arr[j+1])
			count++;
		}	
		cout<<count;
	}
	return 0;
}

