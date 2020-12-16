#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,k,i;
		cin>>n>>k;
		int arr[n+1];
		if(n==k)
		{
			for(i=1;i<=n;i++)
			cout<<i<<" ";
			cout<<"\n";
		}
		else
		{
			int count=0;
			if(n%2==1)
				for(i=1;i<=n;i++)
					arr[i]=pow(-1,i+1)*(i);
			else
				for(i=1;i<=n;i++)
					arr[i]=pow(-1,i)*(i);
			
			for(i=1;i<=n;i++)
				if(arr[i]>0)
					count++;
			
			
			if(k>count)
			for(i=n;i>0;i--)
			{
				if(arr[i]<0)
					arr[i]=-1*arr[i],count++;
				if(k==count)
					break;
			}
			else if(count>k)
			for(i=n;i>0;i--)
			{
				if(arr[i]>0)
					arr[i]=-1*arr[i],count--;
				if(k==count)
					break;
			}
			for(i=1;i<n+1;i++)
			cout<<arr[i]<<" ";
			cout<<"\n";
		}
		
	}	
	return 0;
}
