#include <bits/stdc++.h>
using namespace std;
//判断是否为质数(1为是，0为否)
long long IsPrime(long long in)
{
    if(in==1)return 0;
    for(int i=2;i<=sqrt(in);i++)
    {
        if(in%i==0)return 0;
    }
    return 1;
}
int main()
{
    int a[101],n,i,temp,cnt=1;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>temp;
        if(IsPrime(temp)==1)
        {
            a[cnt]=temp;
            cnt++;
        }
    }
    for(i=1;i<=cnt-1;i++)cout<<a[i]<<" ";
    return 0;
}