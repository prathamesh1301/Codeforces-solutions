#include <bits/stdc++.h>
using namespace std;
#define ll long long
int M=1e9+7;

ll atmost(vector<ll> a,ll s){
    ll sum = 0;
    int i = 0;
    int j = 0;
    ll ct = 0;
    while(i<a.size()){
        sum+=a[i];
        while(sum>s){
            sum-=a[j];
            j++;
        }
        ct+=(i-j+1);
        i++;
    }
    return ct;

}
void solve(){
    ll n,k;
    cin>>n>>k;
    vector<ll> a(n);
    ll tmp = 0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        tmp+=a[i];
    }
    if(k==0){
        cout<<0<<endl;
        return;
    }
    ll ans = atmost(a,tmp) - atmost(a,k-1) ;
    cout<<ans<<endl;
  
    
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    //int t;
    //cin>>t;
    //while(t--)
        solve();
    return 0;


}
