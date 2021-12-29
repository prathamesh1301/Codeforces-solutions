#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll M=1e9+7;

void solve(){
    int n,m;
    cin>>n>>m;
    vector<int> a(n),b(m);
    for(int i=0;i<n;i++)
        cin>>a[i];
    for(int j=0;j<m;j++)
        cin>>b[j];
    int i=0,j=0;
    int ct = 0;

    while(i<n && j<m){
        if(a[i]<b[j]){
            i++;
            ct++;
        }
        else{
            cout<<ct<<" ";
            j++;
        }
    }
    while(j<m){
        cout<<ct<<" ";
        j++;
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
