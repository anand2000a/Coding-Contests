#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while (t--)

	{
		int n, k, i, j;
		cin>>n>>k;
		int ans=-1, mini=INT_MAX;
		for (i=0;i<n;i++)
		{
			cin>>j;
			if (j>k)
				continue;
			int ok = k/j;
			if (ok&&k%j==0)
			{
				if (mini>ok)
				{
					ans=j;
					mini=ok;
				}

			}
		}
		cout<<ans<<"\n";
	}
}
