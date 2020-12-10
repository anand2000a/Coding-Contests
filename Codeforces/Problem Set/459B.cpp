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
	int temp;
	cin>>temp;
	ll maxx=1,minn=1;
	ll mxe=temp,mne=temp;
	
	fr(i,0,t-1)
	{
		cin>>temp;
		if (mxe<temp)
		{
			maxx=1;
			mxe=temp;
		}
		else if (mxe==temp)
		maxx++;
		if(mne>temp)
		{
			minn=1;
			mne=temp;
		}
		
		else if(mne==temp)
		minn++;
	}
	if(mxe==mne)
	cout<<"0 "<<t*(t-1)/2;
	else
	cout<<mxe-mne<<" "<<minn*maxx;
	return 0;
}

