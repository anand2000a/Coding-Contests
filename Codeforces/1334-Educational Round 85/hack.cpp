 
#include <vector>
#include <list>
#include <map>
#include <set>
#include <queue>
#include <deque>
#include <stack>
#include <bitset>
#include <algorithm>
#include <functional>
#include <numeric>
#include <utility>
#include <sstream>
#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <limits>
#include <string.h>
 #include<bits/stdc++.h> 
#define tr(type,c,it) for(type::iterator it=c.begin();it!=c.end();++it)
#define all(c) c.begin(),c.end()
#define mod 1000000007
#define itor(c) c::iterator
#define ll long long
#define vi vector<int>
#define vs vector<string>
#define si set<int>
#define msi multiset<int>
#define ii pair<int,int>
#define sii set<ii>
#define vii vector<ii>
#define vvi vector<vi>
#define pb push_back
#define mp make_pair
#define F first
#define S second
 
 #define pair<int,int> pi
using namespace std;
int main()
{
	long long i,j,k,m,n,t,p,c,l,mp,mc,f;
	cin>>t;
	for(i=0;i<t;i++)
	{
		cin>>n;
		mp=0;
		mc=0;
		l=0;
		f=0;
		for(j=0;j<n;j++)
		{
			cin>>p>>c;
			
			if((p>=mp)&&(c>=mc)&&(c<=p)&&(c<=p-l))
			{
				l=p-c;
				mp=p;
				mc=c;
				
				
			}
			else
			{
				f=1;
				
			}
			
			
			
			
		}
		if(f==0)
		cout<<"YES"<<endl;
		else
		cout<<"NO"<<endl;
		
	}
   
  }















