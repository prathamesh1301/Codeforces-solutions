#include <bits/stdc++.h>
using namespace std;
//const long long m= 1e9+7;
const int N = 2*(1e5+10);
#define ll long long

void solve(){
	int a[3][3];
	int b[3][3];
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			a[i][j]=1;
			cin>>b[i][j];
		}
	}
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			if(b[i][j]%2!=0){
				if(i+1<3)
					a[i+1][j]=1-a[i+1][j];
				if(i-1>=0)
					a[i-1][j]=1-a[i-1][j];
				if(j+1<3)
					a[i][j+1]=1-a[i][j+1];
				if(j-1>=0)
					a[i][j-1]=1-a[i][j-1];
				a[i][j]=1-a[i][j];
			}
		}
	}
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++)
			cout<<a[i][j];
		cout<<endl;
	}
}

int main(){   
    //int t;
    //cin>>t;
    //while(t--)
        solve();
    
    

    return 0;
}
