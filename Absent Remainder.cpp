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
    unordered_map<int,bool> mp;
    for(int i=0;i<n;i++){
        cin>>a[i];
        mp[a[i]]=true;
    }
    sort(a.begin(),a.end());
    int ct=0;
    if(n%2==0)
        ct=n/2;
    else
        ct=(n-1)/2;
    int i=0;
    int j=n-1;

    set<vector<int>> ans;
    while(i<j){
        int k=a[j]%a[i];
        if(mp.find(k)==mp.end()){
            ans.insert({a[j],a[i]});
            j--;
            ct--;
        }
        else{
            i++;
            j=n-1;
        }
        if(ct==0){
            break;
        }
    }
    
    for(auto it:ans)
        cout<<it[0]<<" "<<it[1]<<"\n";
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
