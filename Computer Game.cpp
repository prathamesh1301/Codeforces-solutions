#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll M=1e9+7;
 
void solve(){
    int n;
    cin>>n;
    vector<int> a(n);
    vector<int> b(n);
    string s;
    string p;
    cin>>s;
    cin>>p;
    if(p[n-1]=='1'){
        cout<<"NO\n";
        return;
    }
 
    for(int i=0;i<n;i++){
        if(s[i]=='0')
            a[i]=0;
        else
            a[i]=1;
    }
 
    for(int i=0;i<n;i++){
         if(p[i]=='0')
            b[i]=0;
        else
            b[i]=1;
    }
 
    int ans=0;
    for(int i=0;i<n;i++){
        ans+=(a[i] & b[i]);
    }
 
    if(ans==0)
        cout<<"YES\n";
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
