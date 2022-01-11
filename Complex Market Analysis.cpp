#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define lld double
int M=1e9+7;

const int array_size = 1e6+100;
bool primes[array_size];


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
   ll n,e;
   cin>>n>>e;
   vector<ll> a(n);
   for(int i=0;i<n;i++)
      cin>>a[i];
   ll ans = 0;

   for(int i=0;i<n;i++){
      ll r =0,l=0;
      if(primes[a[i]]){
         for(ll j=i+e;j<n;j+=e)
            if(a[j]==1)
               r++;
            else
               break;
         for(ll j=i-e;j>=0;j-=e)
            if(a[j]==1)
               l++;
            else
               break;
         ans+=(l+r+l*r);   
      }
   }
   cout<<ans<<"\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); 
    memset(primes,true,sizeof(primes));
    sieve();  

    int t;
    cin>>t;

    while(t--)
        solve();
    return 0;


}
