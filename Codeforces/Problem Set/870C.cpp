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
		ll n,j;
		cin>>n;
		if(n<15)
		{
			if(n==4||n==6||n==9)
			cout<<"1\n";
			else if(n==13||n==10||n==8)
			cout<<"2\n";
			else if(n==12||n==14)
			cout<<"3\n";
			else
			cout<<"-1\n";
		}
		else if((n-9)%4==0||(n-6)%4==0||(n-15)%4==0||n%4==0)
		{
			if((n-9)%4==0)
			cout<<(n-9)/4+1<<"\n";
			else if ((n-6)%4==0)
			cout<<(n-6)/4+1<<"\n";
			else if((n-15)%4==0)
			cout<<(n-15)/4+2<<"\n";
			else
			cout<<n/4<<"\n";
		}			
		else
		cout<<"-1\n";
	}
	return 0;
}

