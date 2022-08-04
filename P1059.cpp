#include <bits/stdc++.h>
using namespace std;
int n,a[101],i,out[101],sum,p,flag;
int main()
{
    cin>>n;
    for(i=1;i<=n;i++)
    {
        flag=0;
        cin>>a[i];
        for(p=1;p<i;p++)
        {
            if(a[i]==a[p])
            {
                flag=1;
                break;
            }
        }
        if(flag==0)
        {
            sum++;
            out[sum]=a[i];
        }
    }
    sort(out+1,out+sum+1);
    cout<<sum<<endl;

    for(i=1;i<=sum;i++)cout<<out[i]<<" ";
    return 0;
}