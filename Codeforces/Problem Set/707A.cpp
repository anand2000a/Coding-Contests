//code by - anand2000

#include<bits/stdc++.h>
//#include<ext/pb_ds/assoc_container.hpp>
using namespace std;
//using namespace __gnu_pbds;


#define fast 		ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
#define ll  		long long int
#define vll 		vector < ll >
#define vpll 		vector < pair < ll,ll > >
#define pb 			push_back
#define mp 			make_pair
#define fr(i,a,b) 	for(i=a; i<b; i++)
#define fr1(i,a,b) 	for(i=a; i>=b; i--)
#define inf 		LLONG_MAX
#define first		fi
#define second		se


/*-------Code Goes Here-------*/

int main()
{
	fast;
	ll t;
	t=1;
//	cin>>t;
	while(t--)
	{
		int m,n;
		int j,k;
		cin>>m>>n;
		char ch;
		bool bw=true;
		fr(j,0,m)
		{
			fr(k,0,n)
			{
				cin>>ch;
				if(ch=='C'||ch=='M'||ch=='Y')	
				bw=false;
			}
		}
		if(bw)
		cout<<"#Black&White";
		else
		cout<<"#Color";
	}
	return 0;
}
