#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int a,b,c,x,y,z;
		cin>>x>>y>>z;
		if(x==y||x==z||y==z)
		{
			if((x==y&&z>x)||(x==z&&y>x)||(y==z&&x>y))
			cout<<"NO\n";
			else
			{
				if(x==y&&y==z)
				cout<<"YES\n"<<x<<" "<<y<<" "<<z<<"\n";
				else 
				{
					int maxi=max(x,max(y,z));
					int mini=min(x,min(y,z));
					cout<<"YES\n"<<mini<<" "<<mini<<" "<<maxi<<"\n";
				}
			}
			
		}
		else
		cout<<"NO\n";
	}
	return 0;
	
}
