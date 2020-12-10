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
	int inv=0,flag=1;
	while(t)
	{
		t--;
		if(flag==1)
		{
			cout<<"a";
			inv++;
			if(inv==2)
			flag=0,inv=0;
		}
		else
		{
			cout<<"b";
			inv++;
			if(inv==2)
			flag=1,inv=0;
		}
		
	}
	return 0;
}
	
