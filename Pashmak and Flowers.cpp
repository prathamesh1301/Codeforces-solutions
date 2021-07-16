#include <bits/stdc++.h>
using namespace std;
//const long long m= 1e9+7;
const int N = 2*(1e5+10);
#define ll long long

void solve(){
	ll n;
	cin>>n;
	ll a[n];
	unordered_map<ll,ll> umap;
	for(ll i=0;i<n;i++){
        cin>>a[i];
        umap[a[i]]=0;
	}
	for(ll i=0;i<n;i++){
        umap[a[i]]++;
	}

	sort(a,a+n);
	ll diff=a[n-1]-a[0];

    if(umap.size()==1){
        ll ans=(n*(n-1))/2;
        cout<<diff<<" "<<ans<<endl;
    }else{
        ll ct1=umap[a[n-1]];
        ll ct2=umap[a[0]];
        ll ct=ct1*ct2;
        cout<<diff<<" "<<ct<<endl;
    }



}

int main(){
    //int t;
    //cin>>t;
    //while(t--)
        solve();

    return 0;
}
