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
		int n;
		cin>>n;
		int arr[n+1];
		int j;
		int flag=0;
		fr(j,1,n+1)
			cin>>arr[j];
		if(n==1&&arr[1]%2==1)
		{
			cout<<"-1\n";
			continue;
		}
		fr(j,1,n+1)
		{
			if(arr[j]%2==0)
			{
				cout<<"1\n"<<j<<"\n";
				flag=1;
				break;
			}
		}
		
		if(flag) continue;
		cout<<"2\n1 2\n";
		
		
	}
	return 0;
}

