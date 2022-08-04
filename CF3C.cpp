#include <bits/stdc++.h>
using namespace std;
char maps[6][6];
int w1,w2,sum1,sum2;
bool checkillegal()
{
	if((w1==true)&&(w2==true))return true;
	if((w1==true)&&(sum1==sum2))return true;
	if((w2==true)&&(sum1>sum2))return true;
	return false;
}
void dfs(int a,int b,int x,int y,int k,char chess)
{
    if(k==3)
    {
        if(chess=='X')w1=true;
        else w2=true;
        return;
    }
    else if(a+x<4 && a+x>0 && b+y>0 && b+y<4 && maps[a+x][b+y]==chess)dfs(a,b,a+x,b+y,k+1,chess);
}
int main()
{
    for(int p=1;p<=3;p++)
	{
		for(int q=1;q<=3;q++)
  		{
       		cin>>maps[p][q];
        	if(maps[p][q]=='X')sum1++;
        	if(maps[p][q]=='0')sum2++;
    	}
	}
    if(sum2>sum1||sum1-sum2>1)
    {
        cout<<"illegal";
        return 0;
    }
    for(int p=1;p<=3;p++)for(int q=1;q<=3;q++)if(maps[p][q]!='.')for(int a=-1;a<2;a++)for(int b=-1;b<2;b++)if(a!=0||b!=0)dfs(a,b,p,q,1,maps[p][q]);
  	if(checkillegal())cout<<"illegal";
    else if(w1)cout<<"the first player won";
    else if(w2)cout<<"the second player won";
    else if(sum1+sum2==9)cout<<"draw";
    else if(sum1>sum2)cout<<"second";
    else cout<<"first";
    return 0;
}
