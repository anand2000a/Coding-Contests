//code by - anand2000

#include<bits/stdc++.h>

#define fast ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
#define ll long long int
#define vll vector < ll >
#define vpll vector < pair < ll,ll > >
#define pb push_back
#define mp make_pair
#define fr(i,a,b) for(i=a; i<b; i++)
#define fr1(i,a,b) for(i=a; i>=b; i--)
#define inf LLONG_MAX

using namespace std;


/*-------Code Goes Here-------*/

int main()
{
	fast;
	ll t,i;
	cin>>t;
	fr(i,0,t)
	{
		int a,b,c,d;
		cin>>a>>b>>c>>d;
		int ans=a/b;
		ans-=((d/b)-(c-1)/b);			
		cout<<ans<<"\n";	
	}
	return 0;
}
