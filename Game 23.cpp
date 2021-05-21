#include <bits/stdc++.h>
using namespace std;

int main(){
    long long n,tar;
    cin>>n>>tar;
    int ans=0;
    if(tar%n!=0) cout<<-1<<endl;

    else{
        long long div=tar/n;

        while(div%2==0){
            ans++;
            div/=2;
        }
        while(div%3==0){
            ans++;
            div/=3;
        }
        if(div==1) cout<<ans<<endl;
        else cout<<-1<<endl;
    }
	return 0;
}
