#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll M=1e9+7;

void solve(){
    int n,m;
    cin>>n>>m;
    vector<int> a(n+1),b(m+1);
    for(int i=0;i<n;i++)
        cin>>a[i];
    for(int j=0;j<m;j++)
        cin>>b[j];
    a[n] = INT_MAX;
    b[m] = INT_MAX;
    int i=0,j=0;
    while(i<=n && j<=m){
        if(i==n && j==m)break;
        if(a[i]<=b[j]){
            cout<<a[i]<<" ";
            i++;
        }
        else{
            cout<<b[j]<<" ";
            j++;
        }
    }
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
