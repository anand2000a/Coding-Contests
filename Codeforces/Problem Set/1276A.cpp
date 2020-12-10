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
	cin>>t;
	while(t--)
	{
		ll n=0,j;	
		string s;
		cin>>s;
		vll v;
		int len = s.size();
		fr(j,0,len-2)
		{
			if(s[j]=='t'&&s[j+1]=='w'&&s[j+2]=='o'&&s[j+3]=='n'&&s[j+4]=='e'&&j+4<len)
			{
				v.pb(j+3);	
				j+=4;
			}
			else if(s[j]=='o'&&s[j+1]=='n'&&s[j+2]=='e')
				v.pb(j+2);	
				
			else if(s[j]=='t'&&s[j+1]=='w'&&s[j+2]=='o')
				v.pb(j+2);
				
				
		}
		
		len =v.size();
		cout<<len<<"\n";
		fr(j,0,len)
		cout<<v[j]<<" ";
		cout<<"\n";
	}
	return 0;
}

