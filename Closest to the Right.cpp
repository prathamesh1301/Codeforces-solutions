#include <bits/stdc++.h>
using namespace std;
#define ll long long
int M=1e9+7;

void solve(){
    ll n,k;
    cin>>n>>k;
    vector<ll>a(n);
    for(int i=0;i<n;i++)
        cin>>a[i];
    while(k--){
        ll x;
        cin>>x;
        auto it = lower_bound(a.begin(),a.end(),x);
        if(it!=a.end()){
            cout<<it-a.begin()+1<<"\n";
        }
        else
            cout<<n+1<<endl;
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
