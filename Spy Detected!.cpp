#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
        int n;
        cin>>n;
        int a[n];
        unordered_set <int> Set ;
        for(int i=0;i<n;i++){
            cin>>a[i];
            Set.insert(a[i]);
        }
        vector<int> x;
        unordered_set<int> :: iterator itr;
        for(itr=Set.begin();itr!=Set.end();itr++){
            x.push_back(*itr);
        }
        int cta=0;
        int ctb=0;
        for(int i=0;i<n;i++){
            if(a[i]==x[0])
                cta++;
            else
                ctb++;
        }
        if(cta>ctb){
            for(int i=0;i<n;i++){
                if(a[i]==x[1]){
                    cout<<i+1<<"\n";
                break;
                }
 
            }
        }else{
            for(int i=0;i<n;i++){
                if(a[i]==x[0]){
                    cout<<i+1<<"\n";
                break;
                }
 
            }
        }
 
 
 
    }
	return 0;
}
