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
	cin>>t;
	while(t--)
	{
			int n;
			int j,k,a,b,c;
			cin>>n;
			int flag=0;
			for(j=2;j*j*j<=n;j++)
			{
				for(k=j+1;k*k*j<n;k++)
				{
					if(n%(j*k)==0&&flag==0)
					{
						cout<<"YES\n";
						flag=1;
						cout<<j<<" "<<k<<" "<<n/(j*k)<<"\n";
						break;
					}
				}
				if(flag==1)
				break;
			}
			if(flag==0)
			cout<<"NO\n";
			
	}
	return 0;
}
