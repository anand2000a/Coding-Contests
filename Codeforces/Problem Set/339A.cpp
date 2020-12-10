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
		string s;
		cin>>s;
		int len=s.size();
		int j;
		int ok=len/2+1;
		vll v;
		fr(j,0,len)
		{
			if(j%2==0)
			v.pb(int(s[j])-48);
		}
		sort(v.begin(),v.end());
		fr(j,0,ok)
		{
			if(j!=ok-1)
			cout<<v[j]<<"+";
			else
			cout<<v[j];
		}
	}
	return 0;
}
