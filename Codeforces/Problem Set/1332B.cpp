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
	int primes[11] = {2,3,5,7,11,13,17,19,23,29,31};
	cin>>t;
	fr(i,0,t)
	{
	 	int n;
		cin>>n;
		int arr[n];
		int color[n];
		int kk[11]={0,0,0,0,0,0,0,0,0,0,0};
		int j,k;
		fr(j,0,n)
		{
			cin>>arr[j];
			fr(k,0,11)
			if(arr[j]%primes[k]==0)
			{
				color[j]=k+1;
				if(kk[k]==0)
				kk[k]=1;
				break;
			}
		}
		int count=0;
		fr(j,0,11)
		if (kk[j]!=0)
		{
			fr(k,0,n)
			if(color[k]>j)
			color[k]--;
			count++;
		}
		cout<<color[n-1]+1<<"\n";
		fr(j,0,n)
		cout<<color[j]+1<<" ";
		cout<<"\n";
		
	}
	return 0;
}

