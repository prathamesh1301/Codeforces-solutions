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
    for(int i=0;i<n;i++)
        cin>>a[i];
    sort(a.begin(),a.end(),greater<ll>());
    ll ans = 0;
    for(int i=0;i<k;i++){
        ans+=a[i+k]/a[i];
    }
    for(int i=2*k;i<n;i++)
        ans+=a[i];
    cout<<ans<<endl;

}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); 
    //memset(primes,true,sizeof(primes));
    //sieve();  
    //memset(dp,false,sizeof(dp));
    //precal();
    int t;

    cin>>t;

    while(t--)
        solve();
    return 0;


}
