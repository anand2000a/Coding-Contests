//code by - anand2000

#include<bits/stdc++.h>
//#include<ext/pb_ds/assoc_container.hpp>
using namespace std;
//using namespace __gnu_pbds;


#define fast 		ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
#define ll  		long long int
#define vll 		vector < ll >
#define vpll 		vector < pair < ll,ll > >
#define pb 			push_back
#define mp 			make_pair
#define fr(i,a,b) 	for(i=a; i<b; i++)
#define fr1(i,a,b) 	for(i=a; i>=b; i--)
#define inf 		LLONG_MAX
#define first		fi
#define second		se


/*-------Code Goes Here-------*/

int main()
{
	fast;
	ll t;
	t=1;
//	cin>>t;
	while(t--)
	{
		int x1,x2,y1,y2;
		cin>>x1>>y1>>x2>>y2;
		if(x1!=x2&&y1!=y2)
		{
			if(abs(x1-x2)==abs(y1-y2))
			{
				cout<<x1<<" "<<y2<<" "<<x2<<" "<<y1;
			}
			else
			cout<<"-1";
		}
		else
		{
			if(x1==x2)
				cout<<abs(y1-y2)+x1<<" "<<y1<<" "<<abs(y1-y2)+x1<<" "<<y2;
		
			else if(y1==y2)
				cout<<x1<<" "<<y1+abs(x1-x2)<<" "<<x2<<" "<<y2+abs(x1-x2);
			else
				cout<<"-1";
			
		}
	}
	return 0;
}
