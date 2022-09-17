#include <bits/stdc++.h>
using namespace std;
int n,k,cnt;
void dfs(int last,int count,int sum)
{
	if(count>=k){if(sum==n)cnt++; return;}
	for(int i=last;sum+i*(k-count)<=n;i++){if(sum>n)return;dfs(i,count+1,sum+i);}
} 
int main()
{
	cin>>n>>k;
	dfs(1,0,0);
	cout<<cnt;
	return 0;
}
