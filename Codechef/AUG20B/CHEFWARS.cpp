#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while (t--)

	{
		int h, p, i, j;
		cin>>h>>p;
		int win;
		while (h&&p)
		{

			h=h-p;
			if (h<=0)
			{
				win=1;
				break;
			}
			p=p/2;
			if (p==0)
			{
				win=0;
				break;
			}
			//cout<<h<<" "<<p<<"\n";
		}
		cout<<win<<"\n";
	}
}
