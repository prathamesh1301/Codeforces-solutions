#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll M=1e9+7;

bool checkpalindrome(vector<int> v, int x) 
{
    int n = v.size(), i = 0, j = n - 1;
 
    while (i < j)
    {
        if (v[i] == x)
            i++;
        else if (v[j] == x)
            j--;
        else if (v[i] != v[j])
            return 0;
        else
            i++, j--;
    }
 
    return 1; 
}

 
void solve(){
    int n; 
                  cin >> n;
                    vector<int>v(n);
 
                for (int i = 0; i < n; ++i)
                    cin >> v[i];
 
                bool flag = 1; //n==1 and n==2
         
                for (int i = 0; i < n - 1 - i; ++i)
                    if (v[i] != v[n - 1 - i])
                    {
                     flag = checkpalindrome(v, v[i]) or checkpalindrome(v, v[n - 1 - i]);
                        break; 
                    }
         
                if (flag)
                    cout << "YES\n";
         
                else
                    cout << "NO\n";

}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--)
        solve();



return 0;
}
