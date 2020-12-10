//code by - anand2000

#include<bits/stdc++.h>
using namespace std;

#define fast 		ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
#define ll  		long long int
#define vll 		vector < ll >
#define vpll 		vector < pair < ll,ll > >
#define pb 			push_back
#define mp 			make_pair
#define fr(i,a,b) 	for(i=a; i<b; i++)
#define fr1(i,a,b) 	for(i=a; i>=b; i--)
#define inf 		LLONG_MAX


/*-------Code Goes Here-------*/

int main()
{
	fast;
	ll t;
	t=1;
	cin>>t;
	while(t--)
	{
			int n;
			cin>>n;
			int arr[n];
			int j;
			map < int ,int > mp;
			fr(j,0,n)
			{
				cin>>arr[j];
				mp[arr[j]]++;	
			}
			sort(arr,arr+j);
			int maxi=-1;
			int dist=mp.size();

			fr(j,0,mp.size())
			{
				
				maxi=max(maxi,mp[j]);
			}
			
			if(maxi>=dist)
			{
				if(maxi==dist)
					cout<<dist-1<<"\n";
				else
				cout<<dist<<"\n";
			}
			else
			cout<<maxi<<"\n";
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
