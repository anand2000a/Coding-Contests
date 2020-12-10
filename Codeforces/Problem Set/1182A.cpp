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

ll mypower(ll n)
{
	ll m=1;
	while(n)
	{
		m*=2;
		n--;
	}
	return m;
}

int main()
{
	fast;
	ll t,i;
	t=1;
	fr(i,0,t)
	{
		ll n;
		cin>>n;
		if(n%2!=0)
		cout<<0;
		else
		cout<<mypower(n/2);
	}
	return 0;
}


