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
	int arr[t];
	int e=0,o=0;
	fr(i,0,t)
		cin>>arr[i];		
	if (arr[0]%2!=0)
	o++;
	else
	e++;
	if (arr[1]%2!=0)
	o++;
	else
	e++;
	if (arr[2]%2!=0)
	o++;
	else
	e++;
	if (e>=2)
	{
		fr(i,0,t)
		if(arr[i]%2!=0)
		{
			cout<<i+1;
			break;
		}	
	}
	else
	{
		fr(i,0,t)
		if(arr[i]%2==0)
		{
			cout<<i+1;
			break;
		}
	}
	
	
	return 0;
}

