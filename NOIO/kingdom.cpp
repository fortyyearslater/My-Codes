#include <bits/stdc++.h>
using namespace std;
long long problem[1001][1001],m,n,j,i,r,sum,ans,cnt,ch;
int main()
{
	cin>>n>>m;
	for(i=1;i<=m;i++)for(j=1;j<=n;j++)cin>>problem[i][j];	
	for(j=1;j<=n;j++)
	{
		cin>>ans;
		r=ch=sum=0;
		for(i=1;i<=m;i++)if(problem[i][j]==1)r++;
		if(r>m-r)ch=1;
		if(ch==ans)cnt++;
	}
	cout<<cnt;
	return 0;
}

