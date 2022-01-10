#include <bits/stdc++.h>
using namespace std;
#define ll long long
int M=1e9+7;

void solve(){
    
    ll xa,xb,xc;
    cin>>xa>>xb>>xc;
    if(xb-xa==xc-xb){
        cout<<"YES\n";
    }
    else if(xa==xb && xb==xc){
        cout<<"YES\n";
    }
    else if((2*xb-xc)%xa==0 && 2*xb-xc>0){
        cout<<"YES\n";
    }
    else if(((2*xb-xa)%xc==0 && 2*xb-xa>0)){
        cout<<"YES\n";
    }
    else if((xa+xc)%(2*xb)==0){
        cout<<"YES\n";
    }
    else
        cout<<"NO\n";

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
