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
		int i;
		int arr[n];
		for(i=0;i<n;i++)
		cin>>arr[i];
		int flag=0;
		
		for(i=n-1;i>0;i--)
		{
			if(flag&&arr[i]<arr[i-1])
			break;
			if(arr[i]>arr[i-1])
			flag=1;
		}
		cout<<i<<"\n";
	}
	return 0;
	
}
