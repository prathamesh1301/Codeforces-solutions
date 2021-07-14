#include <bits/stdc++.h>
using namespace std;
//const long long m= 1e9+7;
const int N = 2*(1e5+10);
#define ll long long


void solve(){
	string s,s2;
 cin>>s;
int len=s.length();
for(int i=0;i<len;i++)

{
	if(s[i]=='.'){
		s2+='0';
	}
	if(s[i]=='-'&&s[i+1]=='.'){
		s2+='1';
		++i;
		
	}
	if(s[i]=='-'&&s[i+1]=='-'){
		s2+='2';
		++i;
	}
	
} 
 cout<<s2;
 


}

int main(){   
    //int t;
    //cin>>t;
    //while(t--)
        solve();
    
    

    return 0;
}
