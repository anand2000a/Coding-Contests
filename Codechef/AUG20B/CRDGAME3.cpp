#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while (t--)

	{
		int c, r;
		cin>>c>>r;
		int cd=ceil(float(c/9.0));
		int rd=ceil(float(r/9.0));
		if (cd>=rd)
			cout<<"1 "<<rd;
		else
			cout<<"0 "<<cd;
		cout<<"\n";
	}
}
