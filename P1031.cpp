#include <bits/stdc++.h>
using namespace std;
int mid;
int card[10001],n,i,t;
int getmid(int mid)
{
    int sum;
    for(i=1;i<=n;i++)sum+=card[i];
    return sum/=n;
}
int main()
{
    
    cin>>n;
    for(i=1;i<=n;i++)cin>>card[i];
}