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
ll N=1000;
vector<int> a(N);
vector<int> b(N);
ll k,n;
bool isSafe(ll q){
    ll t=k;
    ll ct = 0;
    for(int i=0;i<n;i++){
        ll mx = q*a[i];
        ll dif = max(1ll*0,mx-b[i]);
        //cout<<dif<<endl;
        if(t>=dif){
            ct++;
            t-=dif;
        }
        else
            break;
    }
    //cout<<"ct: "<<ct<<endl;
    if(ct==n)
        return true;
    return false;
}

void solve(){
    cin>>n>>k;
    for(int i=0;i<n;i++)
        cin>>a[i];
    for(int i=0;i<n;i++)
        cin>>b[i];
    ll low = 0;
    ll high = 1e10;
    ll ans = 0;
    while(low<=high){
        ll mid = low+(high-low)/2;
        if(isSafe(mid)){
            ans = mid;
            low = mid+1;
        }
        else
            high = mid-1;
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
    //precal();
    //int t;

    //cin>>t;

    //while(t--)
        solve();
    return 0;


}
