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
//	cin>>t;
	t=1;
	fr(i,0,t)
	{
		int n;
		cin>>n;
		int k;
		cin>>k;
		int arr[n];
		int j;
		fr(j,0,n)
		cin>>arr[j];
		sort(arr,arr+n);
		if(k==n||k==0)
		{
			if(k==n)
			cout<<arr[k-1]<<"\n";
			else
			{
				if(arr[0]==1)	
				cout<<"-1\n";
				else
				cout<<"1\n";
			}	
		}
		else if(arr[k-1]==arr[k])
		cout<<"-1";
		else
		cout<<arr[k-1];
		
			
	}
	return 0;
}
