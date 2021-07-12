#include <bits/stdc++.h>
using namespace std;
const long long m= 1e9+7;
const int N = 1e5+10;
#define ll long long

void solve(){
    int n;
    cin>>n;
    int a[n];
    vector<int> odd,even;
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(i%2==0)
            even.push_back(a[i]);
        else
            odd.push_back(a[i]);
    }
    sort(a,a+n);
    sort(even.begin(),even.end());
    sort(odd.begin(),odd.end());
    int e=0,o=0;
    bool ans=true;
    for(int i=0;i<n;i++){
        int ele;
        if(i%2!=0)
            ele=odd[o++];
        else
            ele=even[e++];
        if(a[i]==ele){

        }else{
            ans=false;
            break;
        }

    }
    if(ans)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    

}

int main(){   
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    

    return 0;
}




	
	

	
	
		
