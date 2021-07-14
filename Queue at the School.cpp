#include <bits/stdc++.h>
using namespace std;
//const long long m= 1e9+7;
const int N = 2*(1e5+10);
#define ll long long


void solve(){
	int n,t;
	cin>>n>>t;
	string s;
	cin>>s;
	while(t--){
		int i=0;
		while(i<n){
			if(i+1<n){
				if(s[i]=='B' && s[i+1]=='G'){
					char x=s[i];
					s[i]=s[i+1];
					s[i+1]=x;
					i+=2;
				}
				else
					i++;

			}else
			{i++;}
			
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
