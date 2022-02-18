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
   int n,m;
   cin>>n>>m;
   vector<pair<int,int>> a(n);
   for(int i=0;i<n;i++){
      cin>>a[i].first>>a[i].second;
   }
   
   int f = a[0].first;
   int s = a[0].second;
   if(f!=0){
      cout<<"NO\n";
      return;
   }
   for(int i=1;i<n;i++){
      if(a[i].first<=s){
         s = max(a[i].second,s);
      }
      else{
         cout<<"NO\n";
         return;
      }
   }
   if(s==m)
      cout<<"YES\n";
   else
      cout<<"NO\n";
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
