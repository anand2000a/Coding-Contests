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
		ll n;
		cin>>n;
		ll arr[n+1];
		ll j;
		fr(j,1,n+1)
			cin>>arr[j];
		int flag=0,start=1,end=1;
		fr(j,1,n)
		{
			if(arr[j]>arr[j+1]&&flag==0)
			{
				start=j;
				flag=1;
			}
				
			if(flag==1&&arr[j]<arr[j+1])
			{
				end=j;
				flag=2;
			}
			if(flag==2)
			break;
				
		}
		cout<<start<<" "<<end<<endl;
		sort(arr+start,arr+end);
		flag=0;
		fr(j,1,n+1)
		cout<<arr[j]<<" ";
		cout<<"\n";
		fr(j,0,n)
		{
			if(arr[j]>arr[j+1])
			{
				flag=1;
				break;
			}
		}
		if(flag==0)
		cout<<"yes\n"<<start+1<<" "<<end+1;
		else
		cout<<"no";
		}
	return 0;
}

