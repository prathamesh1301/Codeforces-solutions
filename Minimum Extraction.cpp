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

int size(int n){
    int ans = 0;
    while(n>0){
        ans++;
        n/=10;
    }
    return ans;
}


void solve(){
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++)
        cin>>a[i];
    sort(a.begin(),a.end());
    vector<int> pre(n);
    pre[0]=a[0];
    int ans = a[0];
    for(int i=1;i<n;i++){
        int t = a[i] - pre[i-1];
        ans = max(ans,t);
        pre[i] = pre[i-1]+t;
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
    int t;

    cin>>t;

    while(t--)
        solve();
    return 0;


}
