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
		ll a,b,c,d;
		cin>>a>>b>>c>>d;
		ll x,y,x1,x2,y1,y2;
		cin>>x>>y>>x1>>y1>>x2>>y2;
		int flag=0;
	
		ll rside=a-b;
		ll lside=b-a;
		ll dvert=c-d;
		ll uvert=d-c;
		if (x1==x2&&(a!=0||b!=0))
		flag=0;
		else if (y1==y2&&(c!=0||d!=0))
		flag=0;
		else
		{
			if(rside<=abs(x-x1)&&lside<=abs(x-x2)&&dvert<=abs(y-y1)&&uvert<=abs(y-y2))
			flag=1;
			
		}
		if(flag)
		cout<<"YES\n";
		else
		cout<<"NO\n";
	}
	return 0;
}

