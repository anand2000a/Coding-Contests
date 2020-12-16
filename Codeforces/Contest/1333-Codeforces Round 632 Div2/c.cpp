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


ll findsum(ll arr[], ll n, ll sum) 
{ 
    // STL map to store number of subarrays 
    // starting from index zero having  
    // particular value of sum. 
    unordered_map<int, int> prevSum; 
  
    ll res = 0; 
  
    // Sum of elements so far. 
    ll currsum = 0; 
  
    for (ll i = 0; i < n; i++) { 
  
        // Add current element to sum so far. 
        currsum += arr[i]; 
  
        // If currsum is equal to desired sum, 
        // then a new subarray is found. So 
        // increase count of subarrays. 
        if (currsum != sum)  
            res++;         
  
        // currsum exceeds given sum by currsum  
        //  - sum. Find number of subarrays having  
        // this sum and exclude those subarrays 
        // from currsum by increasing count by  
        // same amount. 
        if (prevSum.find(currsum - sum) !=  
                                  prevSum.end())  
            res += (prevSum[currsum - sum]); 
          
  
        // Add currsum value to count of  
        // different values of sum. 
        prevSum[currsum]++; 
    } 
  
    return res; 
} 
  


int main()
{
	fast;
	ll t,i;
	t=1;
	fr(i,0,t)
	{
		ll n;
		cin>>n;
		ll j;
		ll arr[n];
		fr(j,0,n)
		cin>>arr[j];
		ll m = findsum(arr,n,0);
		cout<<m;
	}
	return 	0;
}

