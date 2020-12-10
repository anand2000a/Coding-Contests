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
	t=1;
	fr(i,0,t)
	{
		int n,k;
		cin>>n>>k;
		int j;
		int m=k;
		int arr[n];
		int maxa=-1,mina=44641887;
		fr(j,0,n)
		{
			cin>>arr[j];
			maxa=max(maxa,arr[j]);
		}
		sort(arr,arr+n);
		fr(j,0,k)
		{
			arr[0]+=1;
			sort(arr,arr+n);
			
		}
		
		cout<<arr[n-1]<<" "<<maxa+m;
	}
	return 0;
}

