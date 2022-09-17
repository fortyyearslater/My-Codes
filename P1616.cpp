#include<bits/stdc++.h>
using namespace std;
const int M=1e7+1;
long long n,m,f[M],w[M],v[M];
int main()
{
    cin>>m>>n;
    for(int i=1;i<=n;i++) cin>>w[i]>>v[i];
    for(int i=1;i<=n;i++)
       for(int j=w[i];j<=m;j++)
          f[j]=max(f[j],f[j-w[i]]+v[i]);
    cout<<f[m];
    return 0;
}
