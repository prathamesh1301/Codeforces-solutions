#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll M=1e9+7;

void solve(){
    int n,m;
    cin>>n>>m;
    vector<ll> a(n),b(m);
    unordered_map<ll,ll> p,q;
    set<ll> st;
    for(int i=0;i<n;i++){
        cin>>a[i];
        p[a[i]]++;
        st.insert(a[i]);
    }
    for(int j=0;j<m;j++){
        cin>>b[j];
        q[b[j]]++;
        st.insert(b[j]);
    }
    ll ans = 0;
    for(auto it=st.begin();it!=st.end();it++){
        if(p[*it]>=1 && q[*it]>=1)
            ans += p[*it]*q[*it];
    }
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
