//code by - anand2000

#include<bits/stdc++.h>

#define fast ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
#define ll long long int
#define vll vector < ll >
#define vpll vector < pair < ll,ll > >
#define pb push_back
#define mp make_pair
#define fr(i,a,b) for(i=a; i<b; i++)
#define fr1(i,a,b) for(i=a; i>=b; i--)
#define inf LLONG_MAX

using namespace std;

/*-------Code Goes Here-------*/

int binsearch(ll arr[], ll low, ll high ,ll x)  
{  
    ll mid;      

   
    if(x <= arr[low])  
        return low;  
   
    if(x > arr[high])  
        return -1;  
   
    mid = (low + high) / 2;
      

    if(arr[mid] == x)  
        return mid;  

    else if(arr[mid] < x)  
    {  
        if(mid + 1 <= high && x <= arr[mid + 1])  
            return mid + 1;  
        else
            return binsearch(arr, mid + 1, high, x);  
    }  
      
   
    {  
        if(mid - 1 >= low && x > arr[mid - 1])  
            return mid;  
        else
            return binsearch(arr, low, mid - 1, x);  
    }  
}  


int main()
{
	fast;
	ll t,i;
	cin>>t;
	ll arr[t];
	fr(i,0,t)
		cin>>arr[i];
	ll q;
	cin>>q;
	ll ans[t];
	ll tem;
	ans[0]=arr[0];
	fr(i,1,t)
	ans[i]=ans[i-1]+arr[i];
	fr(i,0,q)
	{
		cin>>tem;
		cout<<binsearch(ans,0,t-1,tem)+1<<"\n";
	}
	
	return 0;
}

