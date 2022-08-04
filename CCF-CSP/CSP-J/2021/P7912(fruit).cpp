#include <bits/stdc++.h>
using namespace std;
struct basket
{
	long long code;
	long long type;
	int isused;
}a[20000001];
bool cmp1(basket x,basket y)
{
	if(x.isused!=y.isused)
	{
		return x.isused>y.isused;	
	}
	return x.code<y.code;
}
void reset(basket* a,long long &n,long long &sum,long long &t)
{
	long long i;
	sort(a+1,a+1+n,cmp1);
	n=n-sum;
	t=t+sum;
	sum=0;
}
long long n,i,p,q,cnt,t=1,sum,times;
int main()
{
	scanf("%lld",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%lld",&a[i].type);
		a[i].code=i;
	}
	cnt=n;
	a[0].type=9999; 
	
	while(n>=0)
	{
		for(i=1;i<=n;i++)
		{
			if(a[i].type!=a[i-1].type)
			{
				sum++;
				printf("%lld ",a[i].code);
				a[i].isused=-1;
			}
		}
		printf("\n");	
		reset(a,n,sum,t);
	}
	return 0;
}

