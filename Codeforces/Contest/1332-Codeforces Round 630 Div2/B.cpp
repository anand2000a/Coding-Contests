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

bool check(int num, vll &d)
{
	map < int, int > first;
	ll i;
	fr(i,0,num)
		first[d[i]]++;
	fr(i,1,num+1)
		if(first[i]==0)
			return false;
	map < int, int > second;
	fr(i,0,num)
		second[d[i]]++;
	fr(i,1,num+1)
		if(second[i]==0)
			return false;
	return true;
}

int main()
{
	fast;
	ll t,i;
	cin>>t;
	fr(i,0,t)
	{
		ll n;
		cin>>n;
		set < pair< int , int> > ans; 
		ll maxn=0;
		int j;
		vll v(n);
		fr(j,0,n)
		{
			cin>>v[j];
			maxn=max(maxn,v[j]);	
		}
		if(check(maxn,v))
			ans.insert(maxn,n-maxn);
		if(check(n-maxn,v))
			ans.insert(n-maxn,n);
		cout<<ans.size()<<"\n";
		for(auto x:ans)
			cout<<x.first<<" "<<x.second<<"\n";
	}
	return 0;
}

