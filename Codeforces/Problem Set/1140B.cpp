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
	int t,i;
	cin>>t;
	fr(i,0,t)
	{
		int n;
		cin>>n;
		string s;
		cin>>s;
		int j,mini=n-1;
		fr(j,0,n)
			if(s[j]=='>'||s[n-j-1]=='<')
				mini=min(mini,j);
		cout<<mini<<"\n";
	}
	return 0;
}
