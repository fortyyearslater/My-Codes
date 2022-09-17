#include <bits/stdc++.h>
using namespace std;
int n,k,a[100001]={2},sum,dp[0]=1;
int ans[1001],w[101],v[101];
bool isprime(int n)
{
	for(int i=2;i*i<n;i++)if(n%i==0)return false;
	return true;
}
void dfs(int k,int r)
{
	for(int i=a[k-1];i<=r&&i!=n;i++)
	{
		if(!isprime(i))continue;
		if(i<n)
		{
			a[k]=i;
			if(r-i==0)sum++;
			else dfs(k+1,r-i);
		}
	}
}
int main()
{
	cin>>n;
	for(int i=1;i<=m;i++)
	cin>>w[i]>>v[i];
	for(int i=1;i<=m;i++)
		for(int j=t;j>=1;j--)
			if(j>=w[i])
			    ans[j]=max(ans[j],ans[j-w[i]]+v[i]);
	cout<<ans[t]<<endl;;
	return 0;
}
