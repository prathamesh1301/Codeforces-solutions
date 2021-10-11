#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll M=1e9+7;

void solve(){
    ll n;
    cin>>n;
    vector<ll> a(n);
    map<int,int> mp;
    ll sum=0;
    for(int i=0;i<n;i++)
        cin>>a[i],sum+=a[i],mp[a[i]]++;
    if((2 * sum) % n != 0){
        cout<<0<<"\n";
        return;
    }
    ll need = 2*sum/n;
    ll ans= 0 ;
    for(int i=0;i<n;i++){
        ll a1 = a[i];
        ll a2 =  need -  a1;
        
        if(mp.find(a1)!=mp.end())ans+=mp[a2];
        if(a1 == a2)ans-=1;
    }
    cout<<ans/2<<"\n";


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
