#include <bits/stdc++.h>
using namespace std;
int n,s[5000][5000],maxn,ans;
bool flag=false;
void search(int x,int y)
{
	ans=0;
	for(int i=1;i<=n;i++)
		if(s[x][i])
			ans+=s[x][i];
	for(int i=1;i<=n;i++)
		if(s[i][y])
			ans+=s[i][y];
}
int main()
{
	std:ios::sync_with_stdio(false);
	cin>>n;
	for(int i=1;i<=n;i++)
		for(int j=1;j<=n;j++)
			cin>>s[i][j];
	for(int i=1; i<=n; i++)
		for(int j=1; j<=n; j++)
			if(!s[i][j])
			{
				flag=true;
				search(i,j);
				maxn=max(ans,maxn);
			}
				
	if(!flag)
		cout<<"Bad Game!";
	else
		cout<<maxn;
}
