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
	cin>>t;
	fr(i,0,t)
	{
		string s;
		cin>>s;
		int f1=0,f2=0;
		int len = s.size();
		int j;
		ll summ=0;
		fr(j,0,len)
		{
			if(int(s[j])-48==0)
			f1++;
			if((int(s[j])-48)%2==0&&int(s[j])-48!=0)
			f2=1;
			summ+=int(s[j])-48;
			
		}
		if (f1>0&&summ%3==0)
		{
			if(f2==1)
			cout<<"red\n";
			else if(f1>1)
			cout<<"red\n";
			else
			cout<<"cyan\n";
		}
		else
		cout<<"cyan\n";
	}
	return 0;
}

