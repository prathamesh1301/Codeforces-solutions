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
    long long int t,hc,dc,hm,dm,k,w,a,i,d;

    cin>>hc>>dc;
        cin>>hm>>dm;
        cin>>k>>w>>a;
        d=0;
        for(i=0;i<=k;i++){
            if((hc-1+a*i)/dm>=(hm-1)/(dc+w*(k-i))){
                cout<<"YES"<<endl;
                d=1;
                break;
            }
        }
        if(d==0){
            cout<<"NO"<<endl;
        }
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
