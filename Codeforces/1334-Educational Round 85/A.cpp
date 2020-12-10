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
		int p,c;
		cin>>n;
		int j;
		int tp,tc;
		cin>>p>>c;
		tp=p;tc=c;
		int flag=1;
		if(c>p)
		flag=0;
		fr(j,0,n-1)
		{
			cin>>p>>c;
			if(tc>tp)
			flag=0;
			if((p<tp||c<tc)&&flag==1)
				flag=0;
			else if(flag==1)
			{
				if ((p-tp)<(c-tc)&&c>=tc)
				flag=0;
				else
				{
					tp=p;
					tc=c;
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
