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
		string s;
		cin>>s;
		int len = s.size();
		int arr[len+1];	
		int count=0,j;
		fr(j,0,len)
		{
			arr[j+1]=0;
			if(s[j]=='Q')
			count++;
			else if(s[j]=='A')
			arr[j+1]=count;
		}
	
		int ans=0;
		fr(j,1,len+1)
		if(arr[j]!=0)
		ans+=((count-arr[j])*arr[j]);
		cout<<ans;
	}
	return 0;
}

