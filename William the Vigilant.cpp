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

bool isABC(int i, string& s){
    if(s[i]=='a' && s[i+1]=='b' && s[i+2]=='c') return 1;
    return 0;
}
 
void solve()
{
   ll n,q;cin>>n>>q;
   string s;cin>>s;
   unordered_set<ll> u;
   ll cnt=0;
   for(int i=0;i<n-2;i++){
       if(isABC(i,s)){
           cnt++;i+=2;
       }
   }
   //cout<<cnt<<endl;
   while(q--){
       ll pos;char c;
       cin>>pos>>c;
       pos--;
       for(int i=max((ll)0,pos-2);i<=min(pos,n-3);i++){
           if(isABC(i,s)) cnt--;
       }
       s[pos]=c;
       for(int i=max((ll)0,pos-2);i<=min(pos,n-3);i++){
           if(isABC(i,s)) cnt++;
       }
       cout<<cnt<<endl;
   }
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); 
    //memset(primes,true,sizeof(primes));
    //sieve();  
    //memset(dp,false,sizeof(dp));
    //preCal();
    /*int t;
    cin>>t;

    while(t--)*/
        solve();
    return 0;


}
