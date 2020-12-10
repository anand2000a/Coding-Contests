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
	cin>>t;
	while(t--)
	{
		ll n,j;
		cin>>n;
		int m,k;
		bool arr[100005];
		memset(arr,false,100005);
		int pr;
		int flag=0;
		int un=-1;
		fr(j,1,n+1)
		{
			cin>>m;
			flag=0;
			fr(k,1,m+1)
			{
				cin>>pr;
				if(flag==0)
				{
					if(arr[pr]==false)
					{
						arr[pr]=true;
						flag=1;
					}
				}
			}
			if(flag==0&&un==-1)
			un=j;
			
		}
		flag=1;
		int unp=-1;
		fr(j,1,n+1)
		{
			if(arr[j]==false)
			{
				flag=0;	
				unp=j;
				break;
			}		
		}
		if(flag)
		cout<<"OPTIMAL\n";
		else
		{
			cout<<"IMPROVE\n";
			cout<<un<<" "<<unp<<"\n";
		}
	
	}
	return 0;
}

