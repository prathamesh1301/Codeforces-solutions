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
    int n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    vector<int> mp(26);
    for(int i=0;i<n;i++)
        mp[s[i]-'a']++;
    int pairs = 0;
    int singles = 0;
    for(int i=0;i<26;i++){
        pairs += mp[i]/2;
        singles += mp[i]%2;
    }
    int ans = 0;
    ans += (pairs/k)*2;
    singles += (pairs-(pairs/k)*k)*2;
    if(singles>=k)
        ans++;
    cout<<ans<<"\n";

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
