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
    map<int,vector<int>> mp;
    map<int,bool>ump;
    for(int i=0;i<n;i++){
        cin>>a[i];
        mp[a[i]].push_back(i);
        ump[a[i]]=false;
    }
    int ans = INT_MIN;
    for(int i=0;i<n;i++){
        if(mp[a[i]].size()>=2 && !ump[a[i]]){
            ump[a[i]]=true;
            int diff = INT_MAX;
            int l,r;
            for(int j=0;j<mp[a[i]].size()-1;j++){
                if(mp[a[i]][j+1]-mp[a[i]][j]<diff){
                    diff = mp[a[i]][j+1]-mp[a[i]][j];
                    l=mp[a[i]][j];
                    r=mp[a[i]][j+1];
                }
            }
            int tmp = l+(n-r);
            ans=max(ans,tmp);
        }
    }
    if(ans==INT_MIN)
        cout<<-1<<"\n";
    else
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
