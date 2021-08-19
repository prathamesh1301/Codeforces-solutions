#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll M=1e9+7;


void  solve(){
    ll n;
    cin>>n;
    ll sq=1;
    while(sq*sq<n)sq++;
    if(sq*sq==n){
        cout<<sq<<" "<<1<<endl;
        return;
    }
    sq--;
    ll st=sq*sq;
    ll b=st+sq+1;
    ll y=sq+1;
    if(n<b){
        cout<<n-st<<" "<<y<<endl;
        return;
    }
    else{
        sq++;
        cout<<y<<" "<<sq*sq-n+1<<endl;
    }
}

int main()
{

    int t;
    cin>>t;
    while(t--)
        solve();


return 0;
}
