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
    vector<ll> a(n);
    for(int i=0;i<n;i++)
        cin>>a[i];
    int i=n-2;
    int val = a[n-1];
    int k=1;
    int ans = 0;
    while(i>=0){
        while(i>=0 && a[i]==val){
            i--;
            k++;
        }
        if(i<0)break;
        if(i+1-k>=0){
            //cout<<k<<endl;
            int t=k;
            int l=0;
            while(t--){
                i--;
                l++;
            }
            ans++;
            k+=l;
            

        }
        else{
            ans++;
            break;
        }
        
    }
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
