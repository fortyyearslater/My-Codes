#include <bits/stdc++.h>
using namespace std;
int n,m,s,w[1001],v[1001],ans,t,vis[1001][1001];
int maps[1001][1001];
int valx[3]={1,0,0},valy[3]={0,1,-1};
	
void search(int x,int y)
{	
	if(x>n){ans++;return;}
	if(x>=1)
	{
		for(int i=1;i<=n;i++)
			for(int j=1;j<=m;j++)
				{maps[i][j]=0;maps[i][j+v[i]]=1;}
	}
	for(int i=0;i<=2;i++)
	{
		int dx=valx[i]+x,dy=valy[i]+y;
		vis[x][y]=1;
		if(dy<=m&&dy>=0&&maps[dx][dy]==1&&vis[dx][dy]==0)search(dx,dy);
		vis[x][y]=0;
	}
}
const int mod=1e7+7;
int main()
{
	cin>>n>>m>>s;
	for(int i=1;i<=n;i++)
	{
		cin>>w[i];
		for(int j=1;j<=w[i];j++)
		{
			cin>>t;
			maps[i][t]=1;
		}
	}
	for(int i=1;i<=n;i++)cin>>v[i];
	search(0,s);
	cout<<ans;
	return 0;
} 
