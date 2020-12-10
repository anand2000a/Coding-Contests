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
	t=1;
	fr(i,0,t)
	{
		ll a,b;
		cin>>a>>b;
		ll max=(a-b)*(a-b+1)/2;
		ll teams=a/b;
		ll rem=a%b;
		ll min=teams*(teams-1)*(b-rem)/2+(teams)*(teams+1)*rem/2;
		cout<<min<<" "<<max;	
	}
	return 0;
}

