#include <bits/stdc++.h>
using  namespace std;
int i,n,cnt,a[16],ans;
bool check(int x,int y)
{
    for(i=1;i<x;i++)if((y==a[i])||(abs(a[i]-y)==abs(i-x)))return false;
    return true;
}
void dfs(int k)
{
    if(k==n+1)
    {
        if(ans<=2){for(i=1;i<=n;i++)cout<<a[i]<<" ";cout<<endl;}
        ans++;
        return;
    }
    for(i=1;i<=n;i++)
    {
        if(check(k,i)==true)
        {
            a[k]==i;
            dfs(k+1);
            a[k]=0;
        }
        
    }
}
int main()
{
    cin>>n;
    dfs(1);
    cout<<ans;
}