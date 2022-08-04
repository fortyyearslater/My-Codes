#include<bits/stdc++.h>
using namespace std;
char p[6][6];
int f,s,pf,ps;
void dfs(int a,int b,int c,int d,int e,char t)
{
	if(e==3)
	{
		if(t=='X')pf=1;
		else ps=1;
		return;
	}
	else if(a+c<4 && a+c>0 && b+d<4 && b+d>0 && p[a+c][b+d]==t)dfs(a,b,a+c,b+d,e+1,t);
}
int main()
{
	for(int x=1;x<4;x++)
	{
		for(int y=1;y<4;y++)
		{
			cin>>p[x][y];
			if(p[x][y]=='X')f++;
			if(p[x][y]=='0')s++;
		}	
	}
	if(s>f||f-s>1)
	{
		cout<<"illegal";
		return 0;
	}
	for(int x=1;x<=3;x++)for(int y=1;y<=3;y++)if(p[x][y]!='.')for(int a=-1;a<2;a++)for(int b=-1;b<2;b++)if(a!=0||b!=0)dfs(a,b,x,y,1,p[x][y]);
	if((pf&&ps)||(pf&&f==s)||(ps&&f>s))cout<<"illegal";
	else if(pf)cout<<"the first player won";
	else if(ps)cout<<"the second player won";
	else if(f+s==9)cout<<"draw";
	else if(f>s)cout<<"second";
	else cout<<"first";
	return 0;
}
