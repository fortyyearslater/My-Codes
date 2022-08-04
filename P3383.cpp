#include <bits/stdc++.h>
using namespace std;
long long IsPrime(long long in)
{
    for(int i=2;i<=sqrt(in);i++)
    {
        if(in%i==0)return 0;
    }
    return 1;
}
long long n,q,p,sum=1,i,k[10000000],qu;
int main()
{
	freopen("P3383_1.in.txt","r+",stdin);
    std::ios::sync_with_stdio(0);
	cin>>n>>q;
	for(p=2;p<=n;p++)
		{
			if(IsPrime(p)==1)
			{
			    k[sum]=p;
				sum++;
			}
		}
	for(i=1;i<=q;i++)
	{
		cin>>qu;
		cout<<k[qu]<<endl;
	}
	return 0;
}
