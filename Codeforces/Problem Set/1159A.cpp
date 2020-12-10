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
		int n,j;	
		cin>>n;
		string s;
		cin>>s;
		int ans=0;
		int maxi=0;
		int flag=0;
		fr1(j,n-1,0)
		{
			if(s[j]=='+')
				ans++;			
			else
				ans--;
			maxi=max(maxi,ans);
		}
		cout<<maxi;
	}
	return 0;
}
