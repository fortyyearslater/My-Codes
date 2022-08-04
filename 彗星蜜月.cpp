#include <bits/stdc++.h>
using namespace std;
unsigned long long f(unsigned long long in)
{
    unsigned long long ans,t,i,sum;
    while(in>0)
    {
        ans=ans+in/10*pow(10,sum);
    }
    return ans;
}
unsigned long long a,b,n,i;
int main()
{
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>a;
        cout<<f(a);
    }
    return 0;
}