#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define REP(i,n) for (int i = 1; i <= n; i++)
#define mod 1000000007
using vi = vector<int>;
#define pb push_back
ll minn =  INT_MAX;


void solve(){
    ll a, b, c;
    cin >> a >> b >> c;
 
    int v1 = max(b, c) - a + 1;
    int v2 = max(a, c) - b + 1;
    int v3 = max(a, b) - c + 1;
 
    cout << max(0, v1) << " " << max(0, v2) << " " << max(0, v3) << "\n";
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
