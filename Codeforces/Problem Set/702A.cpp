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
		cin>>n;
		ll arr[n];
		ll j,max=1,cmax=1;
		fr(j,0,n)
		cin>>arr[j];
		fr(j,0,n-1)
		{
			if(arr[j+1]>arr[j])
			cmax++;
			else
			cmax=1;
			if(cmax>max)
			max=cmax;
			
		}
		cout<<max;
	}
	return 0;
}


