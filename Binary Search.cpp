#include <bits/stdc++.h>
using namespace std;
#define ll long long
int M=1e9+7;

bool binary(vector<ll> a,ll l, ll r,ll x){
    while(l<=r){
        ll mid = l+(r-l)/2;
        if(a[mid] == x)
            return true;
        else if(a[mid]>x)
            r = mid - 1;
        else
            l = mid + 1;
    }
    return false;
}
void solve(){
    ll n,q;
    cin>>n>>q;
    vector<ll> a(n);
    vector<ll> qu(q);
    unordered_map<ll,bool> mp;
    for(int i=0;i<n;i++){
        cin>>a[i];
        mp[a[i]] = true;
    }
    for(int i=0;i<q;i++)
        cin>>qu[i];
    for(int i=0;i<q;i++){
        ll x = qu[i];

        if(mp[x])
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }


}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    //cin>>t;
    //while(t--)
        solve();
    return 0;


}
