#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	
	while(t--)
	{
		string s;
		cin>>s;	
		int len = s.size();
		if((s[len-2]=='c'&&s[len-1]=='h')||s[len-1]=='x'||s[len-1]=='s'||s[len-1]=='o')
		cout<<s<<"es\n";
		else if(s[len-1]=='f')
		{
			s[len-1]='v';
			cout<<s<<"es\n";
		}
		else if(s[len-2]=='f'&&s[len-1]=='e')
		{
			s[len-2]='v';
			cout<<s<<"s\n";
		}
		else if(s[len-1]=='y')
		{
			s[len-1]='i';
			cout<<s<<"es\n";
		}
		else
		cout<<s<<"s\n";
	}
	
	
}
