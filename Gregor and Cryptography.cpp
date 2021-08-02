#include <bits/stdc++.h>
using namespace std;
#define ll long long
 
void  solve(){
    ll p;
    cin>>p;
    if(p==5){
        cout<<2<<" "<<4<<"\n";
    }
    else{
        p--;
        int a=p/2;
        cout<<2<<" "<<a<<"\n";
    }
}
 
 
 
int main()
{   ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
        solve();
 
 
    return 0;
}
