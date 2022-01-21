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
    int n; cin >> n;
    string s; cin >> s;
    if(is_sorted(s.begin(), s.end()))
   {
        cout << 0 << "\n";
        return;
    }
        
    string t = s;
    sort(t.begin(), t.end());
    cout << 1 << "\n";
    vector<int> ans;
    for(int i = 0; i < n; i++)
    {
        if(s[i] != t[i])
            ans.push_back(i+1);
    }
    cout << ans.size() << " ";
    for(int i = 0; i < ans.size(); i++)
        cout << ans[i] << " \n"[i+1 == ans.size()]; 
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
