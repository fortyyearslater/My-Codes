#include <bits/stdc++.h>
using namespace std;
bool isletter(char c)
{
	if(c>='a'&&c<='c')return true;
	return false;
}
void make(char opr,int x,int y)
{
	char out[101];
	memset(out,0,sizeof(out));
	if(opr=='a')
	{
		sprintf(out,"%d+%d=%d",x,y,x+y);	
	}
	if(opr=='b')
	{
		sprintf(out,"%d-%d=%d",x,y,x-y);	
	}
	if(opr=='c')
	{
		sprintf(out,"%d*%d=%d",x,y,x*y);	
	}
	cout<<out<<endl<<strlen(out)<<endl;
}
char a,t[11];
int x,y,b,c;
char opr,lopr;
int i,n;
int main()
{
	cin>>n;
	for(i=1;i<=n;i++)
	{
		cin>>t;
		bool check=isletter(t[0]);
		if(check)
		{
			cin>>b>>c;
			a=t[0];
			x=b;
			y=c;
		}
		if(!check)
		{
			sscanf(t,"%d",&x);
			cin>>b;
			y=b;
		}
		make(a,x,y);
	}
	return 0;
}
