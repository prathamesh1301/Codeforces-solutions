#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll M=1e9+7;

void solve(){
    ll n;
    cin>>n;
    vector<string> a;
    string s;
    for(int i=0;i<n-2;i++){
        cin>>s;
        a.push_back(s);
    }
    char f,l,p;
    string ans = "";
    for(int i=0;i<a.size();i++){
        f = a[i][0];
        //l = a[i][1];

        if(i==0)
            ans+=f;
        else{
            p = a[i-1][1];
            if(f==p)
                ans+=f;
            else{
                ans+=p;
                ans+=f;
            }

        }

    }
    int k = ans.length();
    ans+=a[a.size()-1][1];
    while(n-k !=1){
        ans+="a";
        k++;

    }
    
    cout<<ans<<"\n";


    
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
