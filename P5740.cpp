#include <bits/stdc++.h>
using namespace std;
int n,i,a[1001],b[1001],c[1001];
string name[1001];
int maxnum;
int maxn=1;
int main()
{
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>name[i];
        cin>>a[i]>>b[i]>>c[i];
        if(max(maxnum,a[i]+b[i]+c[i])!= maxnum)
        {
            maxnum=a[i]+b[i]+c[i];
            maxn=i;
        }
    }
    cout<<name[maxn]<<" "<<a[maxn]<<" "<<b[maxn]<<" "<<c[maxn];
    return 0;
}
