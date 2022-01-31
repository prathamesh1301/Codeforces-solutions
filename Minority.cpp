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
    string s;
    cin>>s;
    int ct0=0;
    int ct1=0;
    for(int i=0;i<s.length();i++){
        if(s[i]=='1')
            ct1++;
        else
            ct0++;
    }
    if(ct0==ct1)
        cout<<ct0-1<<"\n";
    else if(ct0>ct1)
        cout<<ct1<<"\n";
    else
        cout<<ct0<<"\n";
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
