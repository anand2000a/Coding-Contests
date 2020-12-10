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
#define mii			map < int, int >

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
		cin>>n;
		ll sum1=0,sum2=0,sum3=0;
		fr(j,0,n)
		{
			cin>>k;
			sum1+=k;
		}
		fr(j,0,n-1)
		{
			cin>>k;
			sum2+=k;
		}
		cout<<sum1-sum2<<"\n";
		fr(j,0,n-2)
		{
			cin>>k;
			sum3+=k;
		}
		cout<<sum2-sum3;
	}
	return 0;
}
