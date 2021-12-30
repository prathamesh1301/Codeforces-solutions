#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll M=1e9+7;

void solve(){
    ll n,s;
    cin>>n>>s;
    vector<ll> a(n);
    for(int i=0;i<n;i++)
        cin>>a[i];
    ll ans =  INT_MAX;
    ll l = 0;
    ll r = 0;
    ll sum = 0;
    for(;r<n;r++){
        sum+=a[r];
        while(sum-a[l]>=s){
            sum-=a[l];
            l++;
        }
        if(sum>=s)
            ans = min(r-l+1,ans);
    }
    if(ans==INT_MAX)cout<<-1<<endl;
    else
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
