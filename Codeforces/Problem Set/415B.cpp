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
//	cin>>t;
	while(t--)
	{
		ll n,j;	
		cin>>n;
		int arr[n];
		fr(j,0,n)
		cin>>arr[j];
		bool ans=true;
		int start=1,end=1;
		int flag=1;
		fr(j,0,n-1)
		{
			if(arr[j]>arr[j+1])	
			{
				start=j+1;
				while(arr[j]>arr[j+1]&&j+1<n)
				{
					j++;
				}
				end=j+1;
				break;
			}
		}
//		cout<<start<<" "<<end<<"\n";
		sort(arr+start-1,arr+end);
		fr(j,0,n-1)
		{
			if(arr[j]>arr[j+1])
			{
				ans=false;
				break;
			}
		}
		if(ans)
			cout<<"yes\n"<<start<<" "<<end;
		
		else
			cout<<"no\n";
	}
	return 0;
}
