#include <bits/stdc++.h>
using namespace std;
const long long m= 1e9+7;
const int N = 1e5+10;
#define ll long long

void solve(){
    int n;
    cin>>n;
    int a[n],b[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    for(int i=0;i<n;i++)
        cin>>b[i];
    int total=0;
    for(int i=0;i<n;i++)
        total+=(a[i]-b[i]);
    if(total==0){
        vector<pair<int,int>> ans;
        int i=0,j=0;

        while(1){
            while(i<n && a[i]>=b[i])
                i++;
            while(j<n && a[j]<=b[j])
                j++;
            if(i==n && j==n)
                break;
            while(a[i]<b[i] && a[j]>b[j]){
                ans.push_back({j,i});
                a[i]++;
                a[j]--;
            }
        }
        cout<<ans.size()<<endl;
        for(auto &x:ans){
            cout<<x.first+1<<" "<<x.second+1<<endl;
        }

    }else{
        cout<<-1<<endl;
    }

    

}

int main(){   
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    

    return 0;
}




	
	

	
	
		
