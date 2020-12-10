#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s1,s2;
	cin>>s1>>s2;
	int cow=0,bull=0;
	for(int j=0;j<4;j++)
	{
		for(int i=0;i<4;i++)
		if(s1[j]==s2[i]&&j==i)
		bull++;	
		else if(s1[j]==s2[i])
		cow++;
	}
	cout<<bull<<" "<<cow;
}
