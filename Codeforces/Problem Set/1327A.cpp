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
		ll n,k;
		cin>>n>>k;
		if(k*k>n)
		cout<<"NO\n";
		else
		{
			if(n%2==0&&k%2!=0)
			cout<<"NO\n";
			else if(n%2==1&&k%2==0)
			cout<<"NO\n";
			else
			cout<<"YES\n";
			
		}
	}
	return 0;
}

