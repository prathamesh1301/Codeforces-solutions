#include <bits/stdc++.h>
using namespace std;
//const long long m= 1e9+7;
const int N = 2*(1e5+10);
#define ll long long

bool isDistinct(int n){
	int a,b,c,d;
	a=n%10;
	n=n/10;
	b=n%10;
	n=n/10;
	c=n%10;
	n=n/10;
	d=n%10;
	if(a!=b && a!=c && a!=d && b!=c && b!=d && c!=d)
		return true;
	return false;
}
void solve(){
	ll n;
	cin>>n;
	int ans;
	while(1){
		n=n+1;
		if(isDistinct(n)){
			ans=n;
			break;
		}
	}

	cout<<ans<<endl;


}

int main(){   
    //int t;
    //cin>>t;
    //while(t--)
        solve();
    
    

    return 0;
}
