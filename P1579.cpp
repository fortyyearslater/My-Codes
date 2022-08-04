#include <bits/stdc++.h>
using namespace std;
bool IsPrime(int in)
{
	if(in<0)return false;
	if(in==0)return false;
	if(in==1)return false;
    for(int i=2;i<=sqrt(in);i++)
    {
        if(in%i==0)return false;
    }
    return true;
}
int num[4],i,n,p,q;
int main()
{
	cin>>n;
	if(n%2==0)
	{
		num[1]=2;	
		for(i=1;i<=n-2;i++)
		{
			if(IsPrime(i)&&IsPrime(n-2-i))
			{
				cout<<"2 "<<i<<" "<<n-i-2;	
				return 0;
			}
		}
	}
	for(i=2;i<=n;i++)
	{
		if(IsPrime(i))
		{
			for(p=1;p<=n;p++)
			{
				if(IsPrime(p)&&IsPrime(n-i-p))
				{
					cout<<i<<" "<<p<<" "<<n-i-p;
					return 0;
				}
			}
		}
	}
	return 0;
}

