#include <bits/stdc++.h>
using namespace std;
long long k,i,n,m,a[300050],b[300050],c[300050],p,t,maxx,cnt;
int main()
{
	freopen("sakura4.in","r",stdin);
	cin>>n>>m>>k;
	for(i=1;i<=m;i++)cin>>b[i];
	for(i=1;i<=n;i++)
	{
		cin>>a[i];
		c[i]=c[i-1]+a[i];	
	}
	for(p=0;p<=n;p++)
	{
		cnt=0;
		for(i=1;i<=m;i++)
		{
				t=c[b[i]];
				if(i>=p)t=t-a[p];
				if(t%k==0&&t!=0&&b[i]!=p)cnt++;	
		}
		maxx=max(maxx,cnt);
	}
	cout<<maxx;
	return 0;
}
