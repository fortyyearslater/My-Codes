#include <bits/stdc++.h>
using namespace std;
int a,b,c,minn,maxn,i;
int main()
{
    cin>>a>>b>>c;
    minn=min(min(a,b),c);
    maxn=max(max(a,b),c);
    
    for(i=2;i<=minn;i++)
    {
        if(minn%i==0)
        {
            if(maxn%i==0)
            {
                minn=minn/i;
                maxn=maxn/i;
            }
        }
    } 
       cout<<minn<<"/"<<maxn;
       return 0;
}