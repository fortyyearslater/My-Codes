#include <bits/stdc++.h>
using namespace std;
int n,m,t,ans,tx,ty,fx,fy,sx,sy,maps[26][26]={0},vis[26][26]={0},valx[4]={1,-1,0,0},valy[4]={0,0,-1,1};
void dfs(int x,int y)
{
	if(x==fx&&y==fy){ans++;return;}
	for(int i=0;i<=3;i++){int dx=x+valx[i],dy=y+valy[i];vis[x][y]=1;if(dx>0&&dy>0&&dx<=n&&dy<=m&&maps[dx][dy]==0&&vis[dx][dy]==0)dfs(dx,dy);vis[x][y]=0;}
}
int main()
{
	std::ios::sync_with_stdio(false);
	cin>>n>>m>>t>>sx>>sy>>fx>>fy;
	for(int i=1;i<=t;i++){cin>>tx>>ty;maps[tx][ty]=1;}
	dfs(sx,sy);
	cout<<ans;
	return 0;
}
