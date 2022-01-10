#include <bits/stdc++.h>
using namespace std;
#define ll long long
int M=1e9+7;

void solve(){
    int n;
    cin>>n;
    vector<ll> a(n);
    set<ll> st;
    unordered_map<int,bool> mp;
    for(int i=0;i<n;i++){
        cin>>a[i];

    }
    sort(a.begin(),a.end());
    for(int i=0;i<n;i++){
        if(a[i]<=n && a[i]>=1){
            if(!mp[a[i]]){
                mp[a[i]] = true;
                st.insert(a[i]);
            }
            else{
                ll x = a[i];
                while(a[i]>0){
                    a[i] = floor(a[i]/2);
                    if(a[i]<=n && a[i]>=1 && !mp[a[i]]){
                        mp[a[i]] = true;
                        st.insert(a[i]);
                        //cout<<x<<" "<<a[i]<<" 1"<<endl;
                        break;
                    }
                }
            }
        }
        else{
            ll x = a[i];
           // cout<<"x: "<<x<<endl;
           while(a[i]>0){
                    a[i] = floor(a[i]/2);
                    if(a[i]<=n && a[i]>=1 && !mp[a[i]]){
                        mp[a[i]] = true;
                        st.insert(a[i]);
                        //cout<<x<<" "<<a[i]<<" 2"<<endl;
                        break;
                    }
                } 
        }
    }
    if(st.size()==n)
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
