//code by - anand2000

#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
using namespace std;
using namespace __gnu_pbds;

#define fast                      \
	ios_base::sync_with_stdio(0); \
	cin.tie(NULL);                \
	cout.tie(NULL);
#define ll long long int
#define vll vector<ll>
#define vii vector<int>
#define vpll vector<pair<ll, ll>>
#define pb push_back
#define mp make_pair
#define fr(i, a, b) for (i = a; i < b; i++)
#define fr1(i, a, b) for (i = a; i >= b; i--)
#define inf LLONG_MAX
#define first fi
#define second se
#define mod 1000000007

unsigned long long int modInv(int a) {
    unsigned long long int y=mod-2, x=a, res=1;
    while (y>0) {
        if (y&1)
            res=(res*x)%mod;
        x=(x*x)%mod;
        y=y>>1;
    }
    return res;
}

void nCn(int n, vector<vector<long long int>>&v, vector<int>&inv) {
    if (v[n].size()==n+1)return;
    v[n].push_back(1);
    v[n].resize(n+1);
    unsigned long long int ans=1;
    // cout<<n<<"\n";
    for (int i=1; i<=n; i++) {
        ans=(((ans*(n-i+1))%mod)*inv[i])%mod;
        v[n][i]=((unsigned long long int)v[n][i-1]+ans)%mod;
    }
}

int main() {
    fast;
    int t;
    cin>>t;
    while (t--)
    {
        int n, x;
        cin>>n;
        vector<int>arr(n+1, 0);
        int m=-1;
        for (int i=0; i<n; i++) {
            cin>>x;
            arr[x]++;
            m=max(m, arr[x]);
        }
        vector<int>inv(m+1);

        for (int i=1; i<=m; i++)
            inv[i]=modInv(i);

        vector<vector<long long int>>v(n+1);

        for (int i=1; i<=n; i++) {
            if (arr[i]>0)
                if (v[arr[i]].size()==0) {
                    nCn(arr[i], v, inv);
                }
        }
        vector<int>num, num1;
        for (int i=1; i<=n; i++)
            if (arr[i]!=0)
            {
                num.push_back(arr[i]);
                num1.push_back(i);
            }
        vector<long long int>total(n+1, 0);
        int size= num.size();

        for (int i=0; i<size; i++) {
            int k=num[i];

            for (int r=1; r<=k; r++) {

                unsigned long long int cnt=((v[k][r]-v[k][r-1])%mod)%mod;

                for (int j=0; j<i; j++) {
                    int p=min(r-1, num[j]);
                    cnt=(cnt*v[num[j]][p])%mod;
                }

                for (int j=i+1; j<size; j++) {
                    int p=min(r, num[j]);
                    cnt=(cnt*v[num[j]][p])%mod;
                }
                total[num1[i]]=(total[num1[i]]+cnt)%mod;
            }
        }
        for (int i=1; i<=n; i++) {
            cout<<total[i]<<" ";
        }
        cout<<'\n';
    }
}