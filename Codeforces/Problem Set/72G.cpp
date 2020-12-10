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

ll fib(ll n)
{
	ll j;
	ll n1=1,n2=1,n0;
	if(n<2)
	return n;
	else
	fr(j,1,n)
	{
		n0=n1+n2;
		n1=n2;
		n2=n0;
	}
	return n2;
}

int main()
{
	fast;
	ll t,i;
	cin>>t;
	cout<<fib(t);
	return 0;
}
