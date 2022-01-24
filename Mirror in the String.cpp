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
   ll n;
   cin>>n;
   string s;
   cin>>s;
   string sn="";
   sn+=s[0];
   bool ok=false;
   for(int i=0;i<n;i++)
   {
      if(i==0)continue;
      if(s[i]<s[i-1]){sn+=s[i];ok=true;}
      else if(s[i]==s[i-1]){
         if(ok)sn+=s[i];
         else break;
      }
      else break;
   }
   cout<<sn;
   reverse(sn.begin(),sn.end());
   cout<<sn<<"\n";
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); 
    //memset(primes,true,sizeof(primes));
    //sieve();  
    //memset(dp,false,sizeof(dp));
    //preCal();
    int t;
    cin>>t;

    while(t--)
        solve();
    return 0;


}
