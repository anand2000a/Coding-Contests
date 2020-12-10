#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int j;
	int ans=1;
	for(j=2;j<n;j++)
	{
		if (__gcd(n,j)==1)
			ans++;
	}
	cout<<ans;
	return 0;
}
