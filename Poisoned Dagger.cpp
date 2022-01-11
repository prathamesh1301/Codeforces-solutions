#include <bits/stdc++.h>
using namespace std;
#define ll long long
int M=1e9+7;

bool isValid(ll k,vector<ll>&a,ll h){
   ll sum = 0;
   for(int i=0;i<a.size()-1;i++){
      if(a[i]+k<a[i+1])
         sum+=k;
      else
         sum+=a[i+1]-a[i];
      
   }
   sum+=k;
   return sum>=h;

}

void solve(){
   ll n,h;
   cin>>n>>h;
   vector<ll> a(n);
   for(int i=0;i<n;i++)
      cin>>a[i];
   ll low = 1;
   ll high = 1e18+2;
   ll ans;
   while(low<=high){
      ll mid = low+(high-low)/2;
      if(isValid(mid,a,h)){
         ans = mid;
         high = mid-1;
      }
      else
         low = mid+1;
   }
   cout<<ans<<"\n";


}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    int t;
    cin>>t;
    while(t--)
        solve();
    return 0;


}
