//code by - anand2000

#include<bits/stdc++.h>
using namespace std;

#define fast 		ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
#define ll  		long long int
#define vll 		vector < ll >
#define vpll 		vector < pair < ll,ll > >
#define pb 			push_back
//#define mp 			make_pair
#define fr(i,a,b) 	for(i=a; i<b; i++)
#define fr1(i,a,b) 	for(i=a; i>=b; i--)
#define inf 		LLONG_MAX


/*-------Code Goes Here-------*/

int main()
{
	fast;
	ll t,i;
	cin>>t;
	fr(i,0,t)
	{
		ll n,m,k;
		cin>>n>>m>>k;
		ll arr[n+1][k+1];
		vll v;
		ll j,d;
		fr(j,1,n+1)
		{
			map <ll,ll> mp;
			fr(d,1,k+1)
			{
				cin>>arr[j][d];
				ll num=arr[j][d];
				mp[num]++;
			}
			ll flag=0,maxm=0;
			fr(d,1,m+1)
				if (maxm<=mp[d])
				{
					maxm=mp[d];
					flag=d;
				}
			v.pb(flag);
		}
		ll p=v.size();
		fr(j,0,p)
		cout<<v[j]<<" ";
		cout<<"\n";
	}
	return 0;
}


/*
                    !!!!!!                                                     
                    !!!!!!!!!!                                                 
                     !!!!!!!!!!!!!!!                                           
                       !!!!!!!!!!!!!!                                          
                     !!!!!!!!!!!!!!!                                           
                      !!!!!!!!!!!!                                             
                      !!!!!!!!!!!!                                             
                        !!!!!!!!!!!!                                           
                        !!!!!!!!                                               
                        !!!!!!!!!!                                             
                       !!!!!!!!!!!!!!                                          
                     !!!!!!!!!!!!!!!!                                          
                    !!!!!!!!!!!!!!!!                                  !!!!!    
                  !!!!!!!!!!!!!!!!!!!                               !!!!!!!!!! 
                 !!!!!!!!!!!!!!!!!!!!!!!                 !         !!!!!!!!!!  
            !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!              !!     !!!!!!!!!!!!    
           !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!        !!      !!!!!!!!       
            !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!      
             !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!! !!!!!!!!!!!!       
              !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!  !!!!!!!!!!!!       
       !!!!!! !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!        !!!!!!        
      !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!      !!!!!         
          !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!        !!!          
        !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!        !          
          !!!!!! !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!                       
           !!!!! !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!                         
                  !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!                          
                 !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!                           
                  !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!                               
                  !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!                               
                  !!!!!!!!!!!!!!!!!!!!!!!!!!!!                                 
                  !!!!!!!!!!!!!!!!!!!!!!!!!!                                   
                  !!!!!!!!!!!!!!!!!!!!!!!!!                                    
                   !!!!!!!!!!!!!!!!!!!!!!!!                                    
                    !!!!!!!!!!!!!!!!!!!!                                       
                    !!!!!!!!!!!!!!!!!!!                                        
                     !!!!!!!!!!!!!!!!                                          
                      !!!!!!!!!!!!!!!!                                         
                      !!!!!!!!!!!!!!!                                          
                       !!!!!!!!!!!!!!                                          
                        !!!!!!!!!!!!                                           
                        !!!!!!!!!!!!                                           
                        !!!!!!!!!!!!                                           
                          !!!!!!!!                                             
                          !!!!!!                                               
                           !!!! 
*/                             
