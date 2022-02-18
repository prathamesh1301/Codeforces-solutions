#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define lld double
int mod=1e9+7;

const int array_size = 1e6+100;
bool primes[array_size];

ll gcd(ll a, ll b){if (b == 0)return a;return gcd(b, a % b);}
ll lcm(ll a, ll b){return ((a/gcd(a,b))*b);}
void sieve(){
  
   primes[0] = false;
   primes[1] = false;
   for(ll i = 2;i*i<=array_size;i++){
      if(primes[i]){
         for(ll j=i*i;j<=array_size;j+=i)
            primes[j] = false;
      }
   }
}


void solve(){
   int n,d;
   cin>>n>>d;
   vector<vector<int>> dp(n+1,vector<int>(n+1,0));
   int j = d;
   for(int i=0;i<=n-d;i++){
      dp[i][j++]=1;
   }
   j=d;
   for(int i=0;i<=d;i++){
      dp[i][j--]=1;
   }
   j=0;
   for(int i=d;i<=n;i++)
      dp[i][j++]=1;
   j=n-d;
   for(int i=n;i>=n-d;i--)
      dp[i][j++]=1;
   for(int i=1;i<n;i++){
      bool f = false;
      for(int j=0;j<=n;j++){
         if(dp[i][j]==1){
            f = !f;
         }
         if(f)
            dp[i][j]=1;
      }
   }
   int m;
   cin>>m;
   while(m--){
      int u,v;
      cin>>u>>v;
      if(dp[u][v])
         cout<<"YES\n";
      else
         cout<<"NO\n";
   }
}



int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); 
    //memset(primes,true,sizeof(primes));
    //sieve();  
    //memset(dp,false,sizeof(dp));
    //precal();
    /*int t;

    cin>>t;

    while(t--)*/
        solve();
    return 0;


}
