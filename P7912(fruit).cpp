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
long long n,sum,t=1;
void reset()
{
	long long i;
	sort(a+1,a+1+n,cmp1);
	n-=sum;
	t+=sum;
}
long long i,p,q,cnt,times;
int main()
{
    std::ios::sync_with_stdio(false);
    cin.tie(0),cout.tie(0);
    cin>>n;
	for(i=1;i<=n;i++)
	{
        cin>>a[i].type;
		a[i].code=i;
	}
	cnt=n;
	a[0].type=-1; 
	while(n>0)
	{
	    sum=0;
		for(i=1;i<=n;i++)
		{
			if(a[i].type!=a[i-1].type)
			{
				sum++;
				cout<<a[i].code<<" ";
				a[i].isused=-1;
			}
		}
		cout<<endl;	
		reset();
	}
	return 0;
}
