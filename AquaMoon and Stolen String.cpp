#include <bits/stdc++.h>
using namespace std;
const long long m= 1e9+7;
const int N = 1e5+10;
#define ll long long

void solve(){
    int n,m;
    cin>>n>>m;
    vector<string> a(n);
    int countO[m][26];
    memset(countO,0,sizeof(countO));
    for(int i=0;i<n;i++){
        cin>>a[i];
        for(int j=0;j<m;j++){
            countO[j][a[i][j]-'a']++;
        }
    }
    vector<string> r(n-1);
    int countP[m][26];
    memset(countP,0,sizeof(countP));
    for(int i=0;i<n-1;i++){
        cin>>r[i];
        for(int j=0;j<m;j++){
            countP[j][r[i][j]-'a']++;
        }
    }
    string res;
    for(auto x:a){
        for(int j=0;j<m;j++){
            countO[j][x[j]-'a']--;
        }
        bool ans=true;
        for(int i=0;i<m;i++){
            for(int j=0;j<26;j++){
                if(countO[i][j]!=countP[i][j]){
                    ans=false;
                    break;
                }
            }
            if(!ans)
                break;
        }
        if(ans){
            res=x;
            break;
        }
        else{
            for(int j=0;j<m;j++){
                countO[j][x[j]-'a']++;
            }
        }
    }
    cout<<res<<"\n";

    //cout.flush();
}

int main(){   
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    

    return 0;
}




	
	

	
	
		
