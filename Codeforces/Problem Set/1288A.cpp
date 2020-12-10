#include<bits/stdc++.h>
using namespace std;
 
#define ll long long int
 
int main()
{
	ll t,i;
	double n,d,x;
	cin>>t;
	int flag;
	float m;
	for(i=0;i<t;i++)
	{
		flag=0;
		cin>>n>>d;
		if(n>=d)
		cout<<"YES\n";
		else 
		{								//n=5 d=11
			for(x=1;x<n;x++)
			{
				
				
				if(((ceil(d/(x+1)))+x)<=n)
				{
					cout<<"YES\n";
//					cout<<x<<endl;
					flag=1;
					break;
				}
			}
			
			if (flag==0)
			cout<<"NO\n";
		}
	}
}
