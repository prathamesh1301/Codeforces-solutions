#include <bits/stdc++.h>
using namespace std;
#define ll long long
int M=1e9+7;

ll atmost(vector<int> a,int k){
    if(k==0)return 0;
    map<int,int> mp;
    int i=0;
    int j = 0;
    ll count = 0;
    int n = a.size();
    while(i<n){
        mp[a[i]]++;
        while(mp.size()>k){
            auto it = mp.find(a[j]);
            it->second--;
            if(it->second==0)mp.erase(it);
            j++;
        }
        count += (i-j+1);
        i++;
    }
    return count;

}
void solve(){
    int n,k;
    cin>>n>>k;
    vector<int> a(n);
    for(int i=0;i<n;i++)
        cin>>a[i];
    if(k==0){
        cout<<0<<endl;
        return;
    }
    ll ans = atmost(a,k) ;
    cout<<ans<<endl;
  
    
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
