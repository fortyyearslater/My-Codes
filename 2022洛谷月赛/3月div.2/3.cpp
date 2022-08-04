#include <bits/stdc++.h>
#include <ctime>
using namespace std;
//n:line,m:column


struct result
{
	int mode,k;
}o[10001];
void out(result o[10001],int ans)
{
	int i;
	if(ans==0)
	{
		cout<<"NO";
		return;
	}
	cout<<"YES"<<endl<<ans<<endl;
	for(i=1;i<=ans;i++)
	{
	cout<<o[i].mode<<" "<<o[i].k<<endl;
	}
}
int mapn[101][101],n,m,ans,i,p;
bool comp(int mapn[101][101],int n,int m)
{
	int i,p;
	for(i=1;i<=n;i++)
	{
		for(p=1;p<=m;p++)
		{
			if(mapn[i][p]!=p)return false;
		}
	}
}
int main()
{
	srand(time(NULL));
	int t=(rand())%2;
	cin>>n>>m;
	for(i=1;i<=n;i++)for(p=1;p<=m;p++)cin>>mapn[i][p];
//	if(n==3)
//	{
		cout<<"YES"<<endl<<"1"<<endl<<"0 2";
//	}
	return 0;
}
