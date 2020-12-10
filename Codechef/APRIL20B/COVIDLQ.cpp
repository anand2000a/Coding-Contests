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
		int n;
		cin>>n;
		int arr[n+7]={0};
		int j;
		fr(j,0,n)
		cin>>arr[j];
		int flag=1;
		fr(j,0,n)
		{
			if(arr[j]==1)
			{
				if(arr[j+1]||arr[j+2]||arr[j+3]||arr[j+4]||arr[j+5])
				{
					flag=0;
					break;
				}
			}
		}
		if(flag)
		cout<<"YES\n";
		else
		cout<<"NO\n";
			
						
	}
	return 0;
}

