#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define REP(i,n) for (int i = 1; i <= n; i++)
#define mod 1000000007
using vi = vector<int>;
#define pb push_back
ll minn =  INT_MAX;


void solve(){
    string s;
    cin>>s;
    int n =s.length();
    unordered_map<int,int> mp;
    for(auto it:s){
        mp[it-'0']++;
    }
    int ans =  INT_MAX;
    if(mp[0]>=2){
        int i1;
        int i2;
        int c = 0;
        bool ok = false;
        for(int i=n-1;i>=0;i--){
            if(s[i]=='0' && c>0){
                i1 =  i;
                ok =  true;
                break;
            }
            else if(s[i]=='0')
                i2 = i,c++;
        }
        if(ok){
            int diff = n - i2 -1 + (i2-i1-1);
            ans = min(ans,diff);
        }
    }

    if(mp[5]>=1 && mp[0]>=1){
        int i1;
        int i2;
        int c = 0;
        bool ok = false;
        for(int i=n-1;i>=0;i--){
            if(s[i]=='5' && c>0){
                i1 =  i;
                ok =  true;
                break;
            }
            else if(s[i]=='0')
                i2 = i,c++;
        }
        if(ok){
            int diff = n - i2 -1 + (i2-i1-1);
            ans = min(ans,diff);
        }
    }

    if(mp[2]>=1 && mp[5]>=1){
        int i1;
        int i2;
        int c = 0;
        bool ok = false;
        for(int i=n-1;i>=0;i--){
            if(s[i]=='2' && c>0){
                i1 =  i;
                ok =  true;
                break;
            }
            else if(s[i]=='5')
                i2 = i,c++;
        }
        if(ok){
            int diff = n - i2 -1 + (i2-i1-1);
            ans = min(ans,diff);
        }
    }

    if(mp[7]>=1 && mp[5]>=1){
        int i1;
        int i2;
        int c = 0;
        bool ok = false;
        for(int i=n-1;i>=0;i--){
            if(s[i]=='7' && c>0){
                i1 =  i;
                ok =  true;
                break;
            }
            else if(s[i]=='5')
                i2 = i,c++;
        }
        if(ok){
            int diff = n - i2 -1 + (i2-i1-1);
            ans = min(ans,diff);
        }
    }

    if(mp[0]>=0){
        int diff = n-mp[0];
        ans = min(ans,diff);
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
