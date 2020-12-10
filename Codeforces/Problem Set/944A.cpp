//code by - anand2000

#include<bits/stdc++.h>
using namespace std;

#define fast 		ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
#define ll  		long long int
#define vll 		vector < ll >
#define vpll 		vector < pair < ll,ll > >
#define pb 			push_back
#define mp 			make_pair
#define fr(i,a,b) 	for(i=a; i<b; i++)
#define fr1(i,a,b) 	for(i=a; i>=b; i--)
#define inf 		LLONG_MAX


/*-------Code Goes Here-------*/

int main()
{
	fast;
	ll t,i;
	t=1;
	fr(i,0,t)
	{
		int a,b,c;
		cin>>a>>b>>c;
		int k=0;
		while(b!=c)
		{
			b=b/2+b%2;
			c=c/2+c%2;
			k++;
		}
		if(pow(2,k)==a)
			cout<<"Final!";
		else
			cout<<k;
	}
	return 0;
}


