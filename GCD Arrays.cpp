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
   ll l,r,k;
    cin>>l>>r>>k;
    if(l==r)
    {
        if(l>1)cout<<"YES\n";
        else cout<<"NO\n";
    }
    else
    {
        ll odd=(r-l+1)/2;
        ll even=(r-l+1)/2;
        if(r%2==l%2)
        {
            if(r%2==1)odd++;
            else even++;
        }
        if(k>=odd)cout<<"YES\n"; else cout<<"NO\n";
    }
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
