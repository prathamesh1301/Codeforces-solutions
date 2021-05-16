#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
       int a, b; cin >> a >> b;
        if (b == 1) {
            cout << "NO" << endl;
        } else {
            cout << "YES" << endl;
            cout << a << ' ' << a * (long long)b << ' ' << a * (long long)(b + 1) << endl;
        }


    }
	return 0;
}
