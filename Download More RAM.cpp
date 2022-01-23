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
   ll n,k;
   cin>>n>>k;
   vector<ll> a(n);
   vector<ll> b(n);
   for(int i=0;i<n;i++)
      cin>>a[i];
   for(int i=0;i<n;i++)
      cin>>b[i];
   vector<pair<ll,ll>> ab;
   for(int i=0;i<n;i++){
      ab.push_back({a[i],b[i]});
   }
   sort(ab.begin(),ab.end());
   ll cur_ram = k;
   for(int i=0;i<n;i++){
      if(ab[i].first>cur_ram)break;
      else
      {
         cur_ram+=ab[i].second;
      }
   }
   cout<<cur_ram<<"\n";
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); 
    //memset(primes,true,sizeof(primes));
    //sieve();  
    
    int t;
    cin>>t;

    while(t--)
        solve();
    return 0;


}
