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
	// cin>>t;
	while(t--)
	{
		int n;
        cin>>n;
        if(n==4||n==7||n==44||n==47||n==74||n==77||n==444||n==447||n==474||n==477||n==744||n==747||n==774||n==777)
        cout<<"YES";
        else if (n%4==0||n%7==0||n%47==0||n%74==0||n%447==0||n%474==0||n%477==0||n%747==0||n%774==0)
        cout<<"YES";
        else
        cout<<"NO";
	}
	return 0;
}
