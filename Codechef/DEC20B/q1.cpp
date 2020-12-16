#include<bits/stdc++.h>
using namespace std;

int main()
{
	int d1,v1,d2,v2,p;	
	cin>>d1>>v1>>d2>>v2>>p;
	int day=-1;
	day+=min(d1,d2);
	int pro=0;
	if(d2>d1)
	{
		swap(d1,d2);
		swap(v1,v2);
	}
	int akele=d1-d2;
	if(akele*v2>=p)
	{
		day+=ceil(float(p)/float(v2));
		pro=p;
	}
	else
	{
		day+=akele;
		pro+=(akele*v2);
	}
	if(pro<p)
	day+=ceil(float(p-pro)/float(v1+v2));
	cout<<day;
	return 0;	
}
