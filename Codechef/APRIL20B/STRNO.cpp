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


ll solve(ll n)  
{  
	ll ans=0;
    
    while (n % 2 == 0)  
    {  
    	ans++;
        n = n/2;  
    }  
  
    for (int i = 3; i <= sqrt(n); i = i + 2)  
    {  
        while (n % i == 0)  
        {  
        	ans++;

            n = n/i;  
        }  
    }  
  
    if (n > 2)  
    ans++;
	return ans;
}  

/*Total no of div of any number are (a1+1)(a2+1)....(an+1) 
where a1, a2, ...an are exponents of prime factors...
Hence X should be the number which can be writen as 
multiplication of k numbers > 1. Just check whether x 
has at least k prime factors..*/

int main()
{
	fast;
	ll t,i;
	cin>>t;
	fr(i,0,t)
	{
		ll x,k;
		cin>>x>>k;		
		ll m =solve(x);
		if (m>=k)
		cout<<"1\n";
		else cout<<"0\n";
	}
	return 0;
}

