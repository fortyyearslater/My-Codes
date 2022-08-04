#include <bits/stdc++.h>
using namespace std;
int maps[105][105]={1};
int n,m,tag[105],cnt,dx[5]={-1,1,0,0},dy[5]={0,0,-1,1};
void dfs(int x,int y)
{
    maps[x][y]=0;
    for(int p=-1;p<=1;p++)
    {
        for(int q=-1;q<=1;q++)
        {
        	int kx=x+dx[p],ky=y+dy[q];
            if(maps[kx][ky]==0)continue;
			dfs(kx,ky);
        }
    }
}
int main()
{
    cin>>n>>m;
    for(int p=1;p<=n;p++)for(int q=1;q<=m;q++)scanf("%ld",maps[p][q]);
    for(int p=1;p<=n;p++)
    {
        for(int q=0;q<m;q++)
        {
  /*          if(maps[p][q]!='0')
            {
                dfs(p,q);
                cnt++;
            }
            */
            if(maps[p][q]==1)cout<<"("<<p<<","<<q<<")"<<endl; 
            cout<<maps[p][q];
        }
        cout<<endl;
    }
    cout<<cnt;
    return 0;
}
