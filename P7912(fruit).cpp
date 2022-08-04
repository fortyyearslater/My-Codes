#include <bits/stdc++.h>
using namespace std;
struct basket
{
	long long code,type;
	int isused;
}a[20000001];
bool cmp1(basket x,basket y)
{
	if(x.isused!=y.isused)return x.isused>y.isused;	
	else return x.code<y.code;
}
void reset(basket* a,long long &n,long long &sum,long long &t)
{
	sort(a+1,a+1+n,cmp1);
	n-=sum;t+=sum;
}
long long n,i,p,q,cnt,t=1,times;
int main()
{
//	scanf("%lld",&n);
	freopen("P7912_5.in","r+",stdin);
	freopen("P7912.out","w+",stdout);
    cin>>n;
	for(i=1;i<=n;i++)
	{
//		scanf("%lld",&a[i].type);
    cin>>a[i].type;
		a[i].code=i;
	}
	cnt=n;
	a[0].type=-1; 
	
	while(n>0)
	{
	    long long sum=0;
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