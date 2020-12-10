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
		ll n,j;	
		string s1,s2;
		cin>>s1>>s2;
		int si=s1.size();
		
		fr(j,0,si)
		{
			s1[j]=tolower(s1[j]);
			s2[j]=tolower(s2[j]);
		}
		if(s1==s2)
		cout<<0;
		else if(s1<s2)
		cout<<"-1";
		else
		cout<<1;

	}
	return 0;
}
