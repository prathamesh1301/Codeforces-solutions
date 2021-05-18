#include <bits/stdc++.h>
using namespace std;
int main(){
	int n,k;
	cin>>n>>k;
	int a[n];
	for(int i=0;i<n;i++)
        cin>>a[i];
    int minVal=0;
    int index=1;
    int summ=0;
    for(int i=0;i<k;i++)
        summ+=a[i];
    minVal=summ;
    for(int i=k;i<n;i++){
        summ+=a[i]-a[i-k];
        if(summ<minVal){
            minVal=summ;
            index=i-k+2;
        }

    }
    cout<<index<<endl;

	return 0;
}
