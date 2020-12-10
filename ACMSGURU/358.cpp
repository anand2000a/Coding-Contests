//code by - anand2000

#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
using namespace std;
using namespace __gnu_pbds;


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
		int a1[3],a2[3],a3[3];
		int j;
		fr(j,0,3)
		cin>>a1[j];
		fr(j,0,3)
		cin>>a2[j];
		fr(j,0,3)
		cin>>a3[j];
		sort(a1,a1+3);
		sort(a2,a2+3);
		sort(a3,a3+3);
		int b[3];
		b[0]=a1[1];
		b[1]=a2[1];
		b[2]=a3[1];
		sort(b,b+3);
		cout<<b[1];
	}
	return 0;
}
