#include <bits/stdc++.h>
int n=0,i=0,p=0,m;
double ans,temp,a[101][21],b=0,sum[101];
using namespace std;
int main()
{
	cin>>n>>m;
	for(i=1;i<=n;i++)
	{
		for(p=1;p<=m;p++)cin>>a[i][p];	
	}
	for(i=1;i<=n;i++)
	{
		sort(a[i]+1,a[i]+m+1);	
	}
	for(i=1;i<=n;i++)
	{
		for(p=2;p<=m-1;p++)sum[i]=(sum[i]+a[i][p])*1.00;	
	}
	for(i=1;i<=n;i++)
	{
		temp=(sum[i]*1.00)/(m-2)*1.00;
		if(temp>ans)ans=temp;
	}
	printf("%.2f",ans);
	return 0;
}
