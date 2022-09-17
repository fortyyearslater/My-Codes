#include<bits/stdc++.h>
using namespace std;
int t,m,f[1001],w[101],v[101];
int main()
{
    cin>>t>>m;
    for(int i=1;i<=m;i++) cin>>w[i]>>v[i];
    for(int i=1;i<=m;i++)
       for(int j=t;j>=w[i];j--)
          f[j]=max(f[j],f[j-w[i]]+v[i]);
    cout<<f[t];
    return 0;
}
