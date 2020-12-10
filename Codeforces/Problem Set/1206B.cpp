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
		ll j,coin=0;
		fr(j,0,n)
		cin>>arr[j];
		ll count=0,countzero=0;
		fr(j,0,n)
		{
			if(arr[j]<0)
			{
				coin+=abs(arr[j])-1;
				arr[j]=-1;
				count++;
			}
			else if(arr[j]>0)
			{
				coin+=arr[j]-1;
				arr[j]=1;
			}
			else
			countzero++;
		}
		if(count%2==0)
		coin+=countzero;
		else
		{
			if (count==1)
			{
				if (countzero==0)
				coin+=2;
				else
				coin+=countzero;
			}
			else
			{
				if(countzero==0)
				coin+=2;
				else
				coin+=countzero;
			}
		}
		cout<<coin;
	}
	return 0;
}


