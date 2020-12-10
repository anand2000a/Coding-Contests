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
//	cin>>t;
	while(t--)
	{
		ll n,j;
		map < string, ll > m;
		map < string, ll > m2;
		string s[1001];
		int p[1001];
		ll maxi;
		string maxip;
		cin>>n;
		fr(j,0,n)
		{
			cin>>s[j]>>p[j];
			m[s[j]]+=p[j];
			
			
		}
		maxi=-1;
		fr(j,0,n)
			maxi=max(maxi,m[s[j]]);
//		cout<<maxi<<endl;
		fr(j,0,n)
		{
			m2[s[j]]+=p[j];
			if(m2[s[j]]>=maxi&&m[s[j]]==maxi)
			{
				cout<<s[j];
				break;
			}
		} 
	}
	return 0;
}

