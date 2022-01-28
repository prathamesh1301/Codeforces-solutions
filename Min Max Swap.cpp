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


 
void solve()
{
    ll n;
    cin>>n;
    vector<ll> a(n),b(n);
    for(int i=0;i<n;i++)
        cin>>a[i];
    for(int j=0;j<n;j++)
        cin>>b[j];
    for(int i=0;i<n;i++){
        if(a[i]>b[i])
            swap(a[i],b[i]);
    }
    ll m1 = INT_MIN;
    ll m2 = INT_MIN;
    for(int i=0;i<n;i++){
        m1=max(m1,a[i]);
        m2=max(m2,b[i]);
    }
    ll ans = m1*m2;
    cout<<ans<<"\n";
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); 
    //memset(primes,true,sizeof(primes));
    //sieve();  
    //memset(dp,false,sizeof(dp));
    //preCal();
    int t;
    cin>>t;

    while(t--)
        solve();
    return 0;


}
