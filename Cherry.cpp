#include <bits/stdc++.h>
using namespace std;
#define ll long long

void  solve(){
    int n;
    cin>>n;
    ll a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    ll maxx=-1;
    for(int i=1;i<n;i++){
        ll x=1LL*a[i]*a[i-1];
        if(x>maxx)
            maxx=x;
    }
    cout<<maxx<<endl;
}




int main()
{
    int t;
    cin>>t;
    while(t--)
        solve();


    return 0;
}
