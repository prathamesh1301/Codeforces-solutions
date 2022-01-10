#include <bits/stdc++.h>
using namespace std;
#define ll long long
int M=1e9+7;

void solve(){
    int n;
    cin>>n;
    vector<ll> a(n);
    ll mn = INT_MAX;
    ll mx = INT_MIN;
    for(int i=0;i<n;i++){
        cin>>a[i];
        mn = min(mn,a[i]);
        mx = max(mx,a[i]);
    }
    ll ans= mx - mn;
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
