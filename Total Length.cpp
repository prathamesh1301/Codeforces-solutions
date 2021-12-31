#include <bits/stdc++.h>
using namespace std;
#define ll long long
int M=1e9+7;

ll atmost(vector<ll> a,ll s){
    ll sum = 0;
    int i = 0;
    int j = 0;
    ll ct = 0;
    ll ans = 0;
    while(i<a.size()){
        sum+=a[i];
        while(sum>s){
            sum-=a[j];
            j++;
        }
        ll tmp = (i-j+1);
        ct+=(tmp*(tmp+1))/2;
        
        i++;
    }
    return ct;

}
void solve(){
    ll n,s;
    cin>>n>>s;
    vector<ll> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    ll ans = atmost(a,s);
    cout<<ans<<endl;
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
