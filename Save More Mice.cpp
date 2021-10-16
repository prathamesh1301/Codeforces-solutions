#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define REP(i,n) for (int i = 1; i <= n; i++)
#define mod 1000000007
using vi = vector<int>;
#define pb push_back
ll minn =  INT_MAX;


void solve(){
    ll n,k;
    cin>>n>>k;
    ll mpp[k];
    for(ll i=0;i<k;i++)
        cin>>mpp[i];
    sort(mpp,mpp+k);
    ll c=0;
    ll ans=0;
    for(int ii=k-1;ii>=0;ii--)
    {
        ll i=mpp[ii];
        if(i<=c)break;
                ll d=n-i;
                c+=d;
                ans++;
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
