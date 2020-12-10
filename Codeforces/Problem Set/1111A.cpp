//code by - anand2000

#include<bits/stdc++.h>

#define fast ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
#define ll long long int
#define vll vector < ll >
#define vpll vector < pair < ll,ll > >
#define pb push_back
#define mp make_pair
#define fr(i,a,b) for(i=a; i<b; i++)
#define fr1(i,a,b) for(i=a; i>=b; i--)
#define inf LLONG_MAX

using namespace std;


/*-------Code Goes Here-------*/

int main()
{
	fast;
	ll t,i;
	t=1;
	fr(i,0,t)
	{
		char s[1005];
		char s2[1005];
		int j;
		cin>>s;
		cin>>s2;
		int len1=strlen(s);
		if(len1!=strlen(s2))
		cout<<"No\n";
		else
		{
			int ss1[len1];
			int ss2[len1];
			fr(j,0,len1)
			{
				if(s[j]=='a'||s[j]=='e'||s[j]=='i'||s[j]=='o'||s[j]=='u')
				ss1[j]=1;
				else
				ss1[j]=0;
				
				if(s2[j]=='a'||s2[j]=='e'||s2[j]=='i'||s2[j]=='o'||s2[j]=='u')
				ss2[j]=1;
				else
				ss2[j]=0;
			}
			int flag=1;
			fr(j,0,len1)
			if(ss1[j]!=ss2[j])
			{
				flag=0;
				cout<<"No";
				break;
			}
			if(flag)
			cout<<"Yes";
		}
	}
	return 0;
}

