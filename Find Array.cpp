#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll M=1e9+7;
 
void solve(){
    int n;
    cin>>n;
    vector<int> a(n);
    int k = 2;
    for(int i=0;i<n;i++)
        a[i] = k++;
    for(auto it:a)
        cout<<it<<" ";
    cout<<endl;
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
