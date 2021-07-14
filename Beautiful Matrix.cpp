#include <bits/stdc++.h>
using namespace std;
//const long long m= 1e9+7;
const int N = 2*(1e5+10);
#define ll long long


void solve(){
	int a[5][5];
	int x,y;
	for(int i=0;i<5;i++){
		for(int j=0;j<5;j++){
			cin>>a[i][j];
			if(a[i][j]==1){
				x=i;
				y=j;
			}
		}
	}
	int ans=abs(2-x)+abs(2-y);
	cout<<ans<<endl;
    
}

int main(){   
    //int t;
    //cin>>t;
    //while(t--)
        solve();
    
    

    return 0;
}
