#include <bits/stdc++.h>
using namespace std;
//const long long m= 1e9+7;
const int N = 2*(1e5+10);
#define ll long long

void solve(){
	string s;
	cin>>s;
	int l=0;
	int u=0;
	for(auto i:s){
		if(isupper(i))
			u++;
		else
			l++;
	}
	
	if(l>=u){
		for(int i=0;i<s.length();i++){
			if(isupper(s[i]))
				s[i]=tolower(s[i]);
		}
	}
	else{
		for(int i=0;i<s.length();i++){
			if(!isupper(s[i]))
				s[i]=toupper(s[i]);
		}
	}
	cout<<s<<endl;
}

int main(){   
    //int t;
    //cin>>t;
    //while(t--)
        solve();
    
    

    return 0;
}
