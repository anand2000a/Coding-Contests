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
#define first		fi
#define second		se


/*-------Code Goes Here-------*/

int main()
{
	fast;
	ll t;
	t=1;
//	cin>>t;
	while(t--)
	{
		int exp,noob;
		cin>>exp>>noob;
		int ans=0;
		while(exp>0&&noob>0)
		{
			int flag=0;
			if(exp>noob&&exp>=2&&noob>=1)
			{
				exp-=2;
				noob-=1;
				ans++;
				flag=1;
			}
			else if(exp>=1&&noob>=2)
			{
				exp-=1;
				noob-=2;
				ans++;
				flag=1;
			}
			if(flag==0)
			break;
		}
		cout<<ans;
	}
	return 0;
}
