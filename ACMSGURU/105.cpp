#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int n;
	cin>>n;
	long long int ans= 2*(n/3);
	if(n%3==2)
	ans+=1;
	cout<<ans;
	return 0;
}
