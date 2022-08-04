#include <bits/stdc++.h>
using namespace std;
int n,k,a[10001]={1};
void print(int o)
{
	for(int i=1;i<=o-1;i++)cout<<a[i]<<"+";
	cout<<a[o]<<endl;
}
void dfs(int k,int r)
{
	for(int i=a[k-1];i<=r;i++)
	{
		if(i<n)
		{
			a[k]=i;
			r-=i;
			if(r==0)print(k);
			else dfs(k+1,r);
			r+=i;
		}
	}
}
int main()
{
	cin>>n;
	dfs(1,n);
	return 0;
}
