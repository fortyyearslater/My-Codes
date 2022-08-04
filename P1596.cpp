#include <bits/stdc++.h>
using namespace std;
char maps[102][102];
int n,m,a,b,cnt;
void dfs(int x,int y)
{
	maps[x][y]='.';
	for(int p=-1;p<=1;p++)
	{
		for(int q=-1;q<=1;q++)
		{
			int kx=x+p,ky=y+q;
			if(kx>=0&&kx<=n&&ky>=0&&ky<=m&&maps[kx][ky]=='W')dfs(kx,ky);
		}
	}
	return;
}
int main()
{
	cin>>n>>m;
	for(a=1;a<=n;a++)scanf("%s",maps[a]);
	for(a=0;a<=n;a++)
	{
		for(b=0;b<=m;b++)
		{
			if(maps[a][b]=='W')
			{
				dfs(a,b);
				cnt++;
			}
		}
	}
	cout<<cnt;
	return 0;
}
