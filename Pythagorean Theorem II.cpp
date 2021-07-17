#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){

	int t, counter = 0;
	cin >> t;

	double tmp;

	for (int i = 1; i < t; i++) {
		for (int j = i; (i*i) + (j*j) <= (t*t); j++) {
			tmp = i*i + j*j;

			if (int(sqrt(tmp)) * int(sqrt(tmp)) == tmp)
				counter++;
		}
	}

	cout << counter << endl;


}
int main()
{
        solve();
    return 0;
}
