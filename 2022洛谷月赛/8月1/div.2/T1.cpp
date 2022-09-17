#include <bits/stdc++.h>
using namespace std;
string move;
int dx['Z'],dy['Z'];
void init()
{
	dx['N']=1;
	dy['N']=0;
	dx['S']=-1;
	dy['S']=0;
	dx['W']=0;
	dy['W']=-1;
	dx['E']=0;
	dy['E']=1;
}
int maps[1001][1001],n,m,x,y,cnt[1001][1001];
int main()
{
	init();
	cin>>n>>m>>y>>x;
	cin>>move;
	for(int t=0;t<move.length();t++)
	{
		for(int i=1;i<=n;i++)
		{
			for(int j=1;j<=n;j++)
			{
				cnt[n-i+1][j]++;
				if(x==n-i+1&&y==j)cnt[n-i+1][j]=0;
				else maps[n-i+1][j]+=cnt[n-i+1][j];
			}
		}
		x+=dx[move[t]];y+=dy[move[t]];
	}
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)cout<<maps[n-i+1][j]<<" ";
		cout<<endl;
	}
	return 0;
}
