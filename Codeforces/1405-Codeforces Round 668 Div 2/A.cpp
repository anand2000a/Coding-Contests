#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int arr[n];
		int i;
		for(i=0;i<n;i++)
		cin>>arr[i];
		for(i=n-1;i>=0;i--)
		cout<<arr[i]<<" ";
		cout<<"\n";
	}
}
