#include<bits/stdc++.h>

#define fast ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
#define ll long long int
#define vll vector<ll>
#define vpll vector<pair<ll,ll>>
#define pb push_back
#define fr(i,a,b) for(i=a; i<b; i++)
#define fr1(i,a,b) for(i=a; i>=b; i--)

using namespace std;

int main()
{
	fast;
	ll t,i;
	cin>>t;
	fr(i,0,t)
	{
		int m,n;
		cin>>m>>n;
		string s;
		cin>>s;
		int local[26]={0};
		int ans[26]={0};
		
		int mis[n];
		int j;
		fr(j,0,n)
			cin>>mis[j];
		int k=0,p;
		sort(mis,mis+n);
		fr(j,0,m)
		{
			local[int(s[j])-97]++;
			while(mis[k]==j+1)
			{
				fr(p,0,26)
				ans[p]+=local[p];
				k++;
			}
		}
		fr(p,0,26)
				ans[p]+=local[p];
		fr(j,0,26)
		cout<<ans[j]<<" ";
		cout<<"\n";
	}
	return 0;
}
