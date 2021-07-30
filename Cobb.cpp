#include <bits/stdc++.h>
using namespace std;
#define ll long long

void  solve(){
    int n,k;
    cin>>n>>k;
    ll maxx=-1e9;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    for(int i=n-1;i>=0;i--){
        for(int j=i-1;j>=0;j--){
            ll temp=1ll*(i+1)*(j+1);
            if(temp<=maxx) break;
            temp-=k*(a[i] | a[j]);
            maxx=max(temp,maxx);
        }
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
