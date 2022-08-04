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
long long i,prime[10000001],sumn,range,sum;
int main()
{
	cin>>range;
		for(i=2;sumn<=range;i++)
		{
			if(IsPrime(i)==1)
			{
				sumn=sumn+i;
				sum++;
				prime[sum]=i;
			}
		}
		for(i=1;i<=sum-1;i++)
		{
			cout<<prime[i]<<endl;
		}
		cout<<sum-1;
		return 0;
}
