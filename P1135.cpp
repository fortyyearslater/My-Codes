#include <bits/stdc++.h>
using namespace std;
int k[202],n,a,b,sum=1000000;
void dfs(int s,int f)
{
	if(f==b){sum=min(s-1,sum);return;}
	if(f+k[f]<=b)dfs(s+1,f+k[f]);
	if(f-k[f]>=1)dfs(s+1,f-k[f]);
}
int main()
{
	cin>>n;
	cin>>a>>b;
	for(int i=1;i<=n;i++)cin>>k[i];
	dfs(1,a);
	cout<<sum;
	return 0;
}
