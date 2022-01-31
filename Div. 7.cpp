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
int cmp(int a,int b){
    int ans =0;
    while(a>0 && b>0){
        int r1 = a%10;
        int r2 = b%10;
        if(r1!=r2)
            ans++;
        a=a/10;
        b=b/10;
    }
    return ans;
}
map<int,vector<int>> mp;
void precal(){
    for(int i=7;i<=999;i++){
            if(i%7==0){
                int k = size(i);
                mp[k].push_back(i);
            }
        }
}
void solve(){
    int n;
    cin>>n;
    if(n%7==0){
        cout<<n<<"\n";
    }
    else{
        
        
        int k = size(n);
        int mn_dif = INT_MAX;
        int ans;
        for(int i=0;i<mp[k].size();i++){
            int cp = cmp(n,mp[k][i]);
            if(cp<mn_dif){
                mn_dif=cp;
                ans =  mp[k][i];
            }
        }
        cout<<ans<<"\n";
    }
}



int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); 
    //memset(primes,true,sizeof(primes));
    //sieve();  
    //memset(dp,false,sizeof(dp));
    precal();
    int t;

    cin>>t;

    while(t--)
        solve();
    return 0;


}
