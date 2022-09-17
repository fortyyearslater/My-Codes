#include <bits/stdc++.h>
using namespace std;
long long n,m,hx,hy,maps[25][25],ans[25][25];
int main()
{
	ans[1][1]=1;
	cin>>n>>m>>hx>>hy;
	n++;m++;hx++;hy++;
	maps[hx][hy]=1;
	maps[hx-1][hy-2]=1;
	maps[hx-1][hy+2]=1;
	maps[hx+1][hy-2]=1;
	maps[hx+1][hy+2]=1;
	maps[hx-2][hy-1]=1;
	maps[hx-2][hy+1]=1;
	maps[hx+2][hy-1]=1;
	maps[hx+2][hy+1]=1;
	for(int i=1;i<=n;i++)for(int j=1;j<=m;j++)if((i!=1||j!=1)&&!maps[i][j])ans[i][j]=ans[i-1][j]+ans[i][j-1];
	cout<<ans[n][m];
	return 0;
}
