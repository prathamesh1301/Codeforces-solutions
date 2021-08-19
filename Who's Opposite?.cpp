#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll M=1e9+7;


void  solve(){
    ll a,b,c;
    cin>>a>>b>>c;
    ll ch=abs(a-b);
    ll mx=ch+1;
    if(ch*2<a || ch*2<b || ch*2<c){
        cout<<-1<<endl;
        return;
    }
    if(c<mx)
        c=c+ch;
    else
        c=c-ch;
    cout<<c<<endl;
}

int main()
{

    int t;
    cin>>t;
    while(t--)
        solve();


return 0;
}
