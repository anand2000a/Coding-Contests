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
	int n;
    cin>>n;
    ll sum=2;
    ll a=1,b=1;
    if(n==1)
    	cout<<1;
    else if(n==2)
    	cout<<2;
    else
    {
    	int j;
		ll temp; 
		fr(j,3,n+1)
		{
			temp=b;
			b=a+b;
			a=temp;
			sum+=b;
		}
		cout<<sum;
	}
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
