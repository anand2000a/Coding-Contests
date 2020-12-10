#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while (t--)
	{
		string s, p;
		cin>>s>>p;
		map<char, int> m;
		map< char, int >::iterator it;
		int sl=s.size(), pl=p.size(), i;
		for (i=0;i<sl;i++)
			m[s[i]]++;
		string tans="";
		for (i=0;i<pl;i++)
		{
			m[p[i]]--;
			tans+=p[0];

		}
		string ans="";
		for (it=m.begin();it!=m.end();it++)
		{
			if (it->first<p[0])
			{
				while (it->second--)
				{
					ans+=it->first;
				}
			}
			else
				break;
		}
		if (it->first>p[0])
			ans+=p;
		else
		{
			if (tans>p)
			{
				ans+=p;
			}
			else
			{
				while (m[p[0]]--)
					ans+=p[0];
				ans+=p;
				it++;
			}
		}
		for (;it!=m.end();it++)
		{
			while (it->second--)
			{
				ans+=it->first;
			}
		}

		m.clear();
		cout<<ans<<endl;
	}
}

