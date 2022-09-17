#include <bits/stdc++.h>
using namespace std;
struct island
{
	int l,r,h;
	bool isbroke=false;
}is[100001];
bool cmp(island a,island b)
{
	if(a.h!=b.h)return a.h<b.h;
}
int sum,x,y,n,m,maxh,maxx,p[100001];
void run(int pos)
{
	for(int i=1;i<=m;i++)
	{
		if(is[i].isbroke)continue;
		if(is[i].l<=pos&&is[i].r>=pos)
		{
			is[i].isbroke=true;
			sum++;
			run(is[i].l);
			run(is[i].r);
		}
	}
	return;
}
int main()
{
	cin>>n>>m;
	for(int i=1;i<=m;i++)cin>>is[i].l>>is[i].r>>is[i].h;
	for(int i=1;i<=n;i++)cin>>p[i];
	sum=n;
	sort(p+1,p+n+1);
	sort(is+1,is+n+1,cmp);
	for(int i=1;i<=n;i++)
	{
		run(p[i]);
	}
	cout<<sum;
}
