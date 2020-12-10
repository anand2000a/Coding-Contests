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
	cin>>t;
	fr(i,0,t)
	{
		int n;
		cin>>n;
		if(n==1)
		cout<<"1\n1 1\n";
		else if(n==2)
		cout<<"1\n2 1 2\n";
		else if (n==3)
		cout<<"1\n3 1 2 3\n";		
		else
		{
			int j=4;
			cout<<int(n/2);
			cout<<"\n3 1 2 3\n";
			int flag=1;
			while(flag)
			{
				if(j+1<=n)
				{
					cout<<"2 "<<j<<" "<<j+1<<"\n";
					j+=2;
					if(j>n)
					flag=0;
				}
				else if(j==n)
				{
					cout<<"1 "<<j<<"\n";
					flag=0;
				}
			}
		}
		
	}
	return 0;
}

