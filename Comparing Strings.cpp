#include <bits/stdc++.h>
using namespace std;
//const long long m= 1e9+7;
const int N = 2*(1e5+10);
#define ll long long

void solve(){
	string s1,s2;
	cin>>s1;
	cin>>s2;
	if(s1.length()!=s2.length()){
		cout<<"NO"<<endl;
		return;
	}
	int ct=0;
	vector<char> a1,a2;
	for(int i=0;i<s1.length();i++){
		if(s1[i]!=s2[i]){
            a1.push_back(s1[i]);
            a2.push_back(s2[i]);
            ct++;
		}

	}
	if(ct==2 || ct==0){
        sort(a1.begin(),a1.end());
        sort(a2.begin(),a2.end());
        int flag=0;
        for(int i=0;i<a1.size();i++){
            if(a1[i]!=a2[i]){
                flag=1;
                break;
            }
        }
        if(flag==1)
            cout<<"NO"<<endl;
        else
            cout<<"YES"<<endl;
	}

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
