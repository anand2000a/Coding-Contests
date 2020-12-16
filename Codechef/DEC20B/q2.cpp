#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		ll a,b;
		cin>>a>>b;
		ll ea=a/2;
		ll eb=b/2;
		ll oa=(a+1)/2;
		ll ob=(b+1)/2;
		cout<<ea*eb+oa*ob<<"\n";
	}
		
}
