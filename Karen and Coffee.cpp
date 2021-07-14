#include <bits/stdc++.h>
using namespace std;
//const long long m= 1e9+7;
const int N = 2*(1e5+10);
#define ll long long


ll a[N]={0};
ll b[N]={0};

void solve(){
    ll n,r,q;
    cin>>n>>r>>q;
    for(int i=0;i<n;i++){
        int x,y;
        cin>>x>>y;
        a[x]+=1;
        a[y+1]+=-1;
    }
  
    for(int i=1;i<N;i++){
        a[i]=a[i-1]+a[i];
        if(a[i]>=r)
            b[i]=1;
        else
            b[i]=0;
    }
    for(int i=1;i<N;i++)
        b[i]=b[i]+b[i-1];


    while(q--){
        int x,y;
        cin>>x>>y;
        int ct=b[y]-b[x-1];
        cout<<ct<<endl;
        
    }

}

int main(){   
    //int t;
    //cin>>t;
    //while(t--)
        solve();
    
    

    return 0;
}




	
	

	
	
		
