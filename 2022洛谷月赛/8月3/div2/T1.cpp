#include <bits/stdc++.h>
using namespace std;
long long mnn=1145141919,mxn=-114514,ans,num[1000001],mxrec[1000001],mnrec[1000001],a,b,c;
int n,m;
int main()
{
	std::ios::sync_with_stdio(false);
	cin>>n>>m;
	for(int i=1;i<=n;i++)cin>>num[i];
	for(int i=1;i<=n;i++)
	{
		if(mnn>num[i])mnn=num[i];
		if(mxn<num[i])mxn=num[i];
	}
	mxrec[0]=mxn,mnrec[0]=mnn;
	for(int i=1;i<=m;i++)
	{
		long long a=mxrec[i-1]+2,b=mxrec[i-1]<<1,c;
		if(a>b)mxrec[i]=a;
		else mxrec[i]=b ;
		a=mxrec[i-1]-2,b=mxrec[i-1]<<1,c=mxrec[i-1]>>1;
		if(a>b)a=b;
		if(a>c)a=c;
		mnrec[i]=a;
	}
	for(int i=0;i<=m;i++)
		if(ans<mxrec[i]-mnrec[n-i])
			ans=mxrec[i]-mnrec[m-i];
	cout<<ans;
	return 0; 
}
