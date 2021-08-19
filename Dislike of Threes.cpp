#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define M 4
vector<int> a;
void pre(){
    for(int i=1;i<=100000;i++){
        if(i%3!=0 && i%10!=3){
            a.push_back(i);
        }
    }
}
void  solve(){
    int n;
    cin>>n;
    cout<<a[n-1]<<endl;
}

int main()
{
    pre();
    int t;
    cin>>t;
    while(t--){
        solve();
    }

return 0;
}
