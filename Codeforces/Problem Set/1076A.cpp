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
		int n;
		cin>>n;
		string s;
		cin>>s;
		int j,flag=0;
		fr(j,0,n-1)
		{
			if(s[j]>s[j+1]&&flag==0)
			{
				flag=1;		
			}
			else if(j!=n-1)
			cout<<s[j];
		}
		if(flag)
		cout<<s[n-1];
		
	}
	return 0;
}

