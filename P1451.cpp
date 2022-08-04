#include <bits/stdc++.h>
using namespace std;
int maps[105][105];
int dx[4]={-1,1,0,0},dy[4]={0,0,-1,1};
int n,m,cnt;
void dfs(int x,int y)
{
	maps[x][y]=0;
    for(int i=0;i<4;i++){int kx=x+dx[i],ky=y+dy[i];if(kx>0&&kx<=n&&ky>0&&ky<=m&&maps[kx][ky]!=0)dfs(kx,ky);}
}
int main()
{
    cin>>n>>m;
    for(int i=1;i<=n;i++)for(int j=1;j<=m;j++)scanf("%1d",&maps[i][j]);
	for(int p=1;p<=n;p++)for(int q=1;q<=m;q++){if(maps[p][q]==0)continue;dfs(p,q);cnt++;}
    cout<<cnt;
    return 0;
}
