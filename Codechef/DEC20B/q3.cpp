#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,d;
		cin>>n>>d;
		int arr[n];
		int i;
		int a=0,b=0;
		for(i=0;i<n;i++)
		{
			cin>>arr[i];
			if(arr[i]>=80||arr[i]<=9)
				a++;
			else
				b++;
		}
		cout<<ceil(float(a)/float(d))+ceil(float(b)/float(d))<<"\n";
	}
	return 0;
}
