#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll M=1e9+7;

void solve(){
    ll n;
    cin>>n;
    vector<ll> a(n);
    multiset<ll> mp;
    for(int i=0;i<n;i++){
        cin>>a[i];
        mp.insert(a[i]);
    }
    ll ans = 0;
    for(int i = n;i>0;i--){
        if(mp.count(i)){
            mp.erase(mp.find(i));
        }
        else{
            auto it = mp.end();
            it--;
            ans++;
            if(*it < 2*i +1){
                ans = -1;
                break;
            }
            mp.erase(it);
        }
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
