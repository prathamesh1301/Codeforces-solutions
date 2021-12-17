#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll M=1e9+7;

void solve(){
   int n;
    cin>>n;
    if (n%2==0) cout<<"2 "<<(n-1)-2<<" 1\n";
    else {
        int cur=(n-1)/2;
        if (cur%2==0) cout<<cur-1<<" "<<cur+1<<" "<<1<<endl;
        else cout<<cur-2<<" "<<cur+2<<" "<<1<<endl;
    }
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
