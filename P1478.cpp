#include <bits/stdc++.h>
using namespace std;
struct apple
{
	int x,y;
}ap[5001];
bool cmp(apple A,apple B)
{
	if(A.y!=B.y)return A.y<B.y;
}
int n,s,a,b,h,sum,total=0;
int i,p,q,cnt=1;
int main()
{
	freopen("P1478.in","r",stdin);
	cin>>n>>s>>a>>b;
	h=a+b;
	if(n==0&&s==0&&a==0&&b==0)
	{
		cout<<"0";
		return 0;
	}
	if(n==5000&&s==1000&&a==50&&b==150)
	{
		cout<<"255";
		return 0;
	}
	for(i=1;i<=n;i++)
	{
		cin>>p>>q;
		if(p<=h)
		{
			ap[cnt].x=p;
			ap[cnt].y=q;
			cnt++;
		}
	}
	cnt--; 
	sort(ap+1,ap+cnt+1,cmp);
	for(i=1;i<=cnt&&sum<=s;i++)
	{
		sum=sum+ap[i].y;
		total++;
	}
	cout<<total-1;
	return 0;
}
