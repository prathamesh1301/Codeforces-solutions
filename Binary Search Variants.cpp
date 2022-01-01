#include <bits/stdc++.h>
using namespace std;
#define ll long long
int M=1e9+7;

ll first(vector<ll>a,ll ele){
    ll low = 0;
    ll high = a.size()-1;
    ll ans = -1;
    while(low<=high){
        ll mid = (low+high)>>1;
        if(a[mid]==ele){
            ans = mid;
            high =  mid-1;
        }
        else if(a[mid]>ele)
            high = mid-1;
        else
            low = mid+1;
    }
    return ans;
}

ll last(vector<ll> a, ll ele){
    ll low = 0;
    ll high = a.size()-1;
    ll ans = -1;
    while(low<=high){
        ll mid = (low+high)>>1;
        if(a[mid]==ele){
            ans = mid;
            low =  mid+1;
        }
        else if(a[mid]>ele)
            high = mid-1;
        else
            low = mid+1;
    }
    return ans;
}
ll smallerThanOrEqual(vector<ll> a,ll ele){
    ll low = 0;
    ll high = a.size()-1;
    ll ans = -1;
    while(low<=high){
        ll mid =  (low+high)>>1;
        if(a[mid]==ele){
            return mid;
        }
        else if(a[mid]<ele){
            ans = mid;
            low = mid+1;
        }
        else
            high = mid-1;
    }
    return ans;
}
ll greaterThanOrEqual(vector<ll> a, ll ele){
    ll low = 0;
    ll high = a.size()-1;
    ll ans = -1;
    while(low<=high){
        ll mid =  (low+high)>>1;
        if(a[mid]==ele){
            return mid;
        }
        else if(a[mid]>ele){
            ans = mid;
            high = mid-1;
        }
        else
            low = mid+1;
    }
    return ans;
}
void solve(){
    ll n;
    cin>>n;
    vector<ll> a(n);
    for(int i=0;i<n;i++)
        cin>>a[i];
    ll q;
    cin>>q;
    cout<<"First Index: "<<first(a,q)<<endl;
    cout<<"Last Index: "<<last(a,q)<<endl;
    cout<<"Element index smaller than or equal to: "<<smallerThanOrEqual(a,q)<<endl;
    cout<<"Element index greater than or equal to: "<<greaterThanOrEqual(a,q)<<endl;
}




int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    //cin>>t;
    //while(t--)
        solve();
    return 0;


}
