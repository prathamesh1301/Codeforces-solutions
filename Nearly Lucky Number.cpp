#include <bits/stdc++.h>
using namespace std;
//const long long m= 1e9+7;
const int N = 2*(1e5+10);
#define ll long long

void solve(){
	string s;
	cin>>s;
	int ct=0;
	for(auto i:s){
		if(i=='4' || i=='7')
			ct++;
	}
	if(ct==4 || ct==7)
		cout<<"YES"<<endl;
	else
		cout<<"NO"<<endl;
}

int main(){   
    //int t;
    //cin>>t;
    //while(t--)
        solve();
    
    

    return 0;
}
