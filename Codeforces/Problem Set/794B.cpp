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


/*-------Code Goes Here-------*/

int main()
{
	fast;
	ll t;
	t=1;
//	cin>>t;
	while(t--)
	{
		ll n;
		
		long double height;
		cin>>n>>height;
		long double base=2*height;
		long double area = height*base/2;
//		cout<<fixed<<setprecision(10)<<area;
		long double alot=area/n;
		int j;
		fr(j,0,n-1)
			cout<<fixed<<setprecision(15)<<sqrt((j+1)*alot)<<" ";
		
		
	
	}
	return 0;
}

