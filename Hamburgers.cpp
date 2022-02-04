#include<bits/stdc++.h>
using namespace std;
#define int int64_t
int b,s,c;
int pr[3];
int m;
int req[]={0,0,0};
bool binary_search(int mid)
{
    int to[3];
    for(int i=0;i<3;i++)
    {
        to[i]=req[i]*mid;
    }
    to[0]-=b;
    to[1]-=s;
    to[2]-=c;
    int cost=0;
    for(int i=0;i<3;i++)
        if(to[i]>0)
            cost+=to[i]*pr[i];
    if(cost<=m)
        return true;
    return false;
}
signed main()
{
    string ss;cin>>ss;
    for(char i:ss)
    {
        if(i=='B')
            req[0]++;
        else if(i=='S')
            req[1]++;
        else
            req[2]++;
    }
    cin>>b>>s>>c;
    for(int i=0;i<3;i++)
        cin>>pr[i];
    cin>>m;
    int st=0;
    int en=1e14;
    int ans=0;
    while(st<=en)
    {
        int mid=st+(en-st)/2;
        if(binary_search(mid))
        {
            ans=mid;
            st=mid+1;
        }
        else
        {
            en=mid-1;
        }
    }
    cout<<ans<<"\n";
    return 0;
}
