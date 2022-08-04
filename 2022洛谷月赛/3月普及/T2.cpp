#include <bits/stdc++.h>
using namespace std;
bool CanDeploy(long long n,long long* a,long long k)
{
	int i,c=0;
	int cnt;
	for(i=1;i<=n;i++)
	{
		cnt=0;
		c=c+a[i];
		if(c>=k)
		{
			c=c-k;
			cnt++;
		}
	}
	if(c==0&&cnt>0)return true;
	return false;
}
long long k,c,i,n,m,a[300002],b[300002],p,temp,maxx,cnt;
int main()
{
	freopen("sakura1.in","r",stdin);
	cin>>n>>m>>k;
	for(i=1;i<=m;i++)cin>>b[i];
	for(i=1;i<=n;i++)cin>>a[i];
	for(p=0;p<=n;p++)
	{
		cnt=0;
		temp=a[p];
		a[p]=0;
		for(i=1;i<=m;i++)if(CanDeploy(b[i],a,k))cnt++;
		maxx=max(maxx,cnt);
		a[p]=temp;	
	}
	cout<<maxx;
	return 0;
}
