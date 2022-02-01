#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define lld double
int M=1e9+7;

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

int size(int n){
    int ans = 0;
    while(n>0){
        ans++;
        n/=10;
    }
    return ans;
}


void solve(){
    ll n;
    cin>>n;
    vector<ll> arr(n);
    for(int i=0;i<n;i++)
        cin>>arr[i];
    ll g=arr[0];
    ll l=arr[1];
    ll ans=0;
    for(int i=2;i<n;i++)
    {
        if(i%2==0)g=gcd(g,arr[i]);
        else l=lcm(l,arr[i]);
    }
    if(l%g!=0)
    {
        ans=g;
    }
    bool ok=true;
    for(int i=1;i<n;i+=2)
    {
        if(arr[i]%g==0)
        {
            ok=false;
            break;
        }
    }
    if(ok)
    {
        cout<<g<<"\n";
        return;
    }
    g=arr[1];
    l=arr[0];
    for(int i=2;i<n;i++)
    {
        if(i%2==1)g=gcd(g,arr[i]);
        else l=lcm(l,arr[i]);
    }
    ok=true;
    for(int i=0;i<n;i+=2)
    {
        if(arr[i]%g==0)
        {
            ok=false;
            break;
        }
    }
    if(ok)
    {
        cout<<g<<"\n";
        return;
    }
    cout<<"0\n";
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
