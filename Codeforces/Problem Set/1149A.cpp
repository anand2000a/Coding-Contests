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
		ll n;
		int m;
		ll one=0,two=0;
		cin>>n;
		ll j;
		fr(j,0,n)
		{
			cin>>m;
			if(m==1)
			one++;
			else
			two++;
		}
		if(one==0)
		fr(j,0,n)
		cout<<"2 ";
		else if(two==0)
		fr(j,0,n)
		cout<<"1 ";
		else
		{
			if(two==1)
			{
				cout<<"2 ";
				fr(j,0,n-1)
				cout<<"1 ";
			}
			else if(two==2)
			{
				cout<<"2 1 2 ";
				fr(j,0,n-3)
				cout<<"1 ";
			}
			else
			{
				cout<<"2 1 2 ";
				fr(j,0,two-2)
				cout<<"2 ";
				fr(j,0,one-1)
				cout<<"1 ";
			}
			
		}
	}
	return 0;
}

