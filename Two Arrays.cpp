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
    int n;
    cin>>n;
    vector<int> a(n);
    vector<int> b(n);
    for(int i=0;i<n;i++)
        cin>>a[i];
    for(int i=0;i<n;i++)
        cin>>b[i];
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    bool flag = false;
    for(int i=0;i<n;i++){
        if(a[i]!=b[i] && a[i]+1!=b[i]){
            flag = true;
            break;
        }
    }
    if(flag)
        cout<<"NO\n";
    else
        cout<<"YES\n";

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
