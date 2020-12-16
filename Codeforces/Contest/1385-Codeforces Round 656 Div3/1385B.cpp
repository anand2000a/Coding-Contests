#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int temp;
		int lim=2*n;
		map<int,int> mp;
		while(lim--)
		{
			cin>>temp;
			mp[temp]++;
			if(mp[temp]==1)
			cout<<temp<<" ";
		}
		cout<<"\n";
	}
	return 0;
	
}
