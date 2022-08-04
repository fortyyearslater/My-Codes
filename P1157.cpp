#include <bits/stdc++.h>
using namespace std;
int k,r,n,num[114514];
void dfs(int k)
{
	int i=0;
	if(k>r){for(i=1;i<=r;i++)cout<<setw(3)<<num[i];	cout<<endl;return;}	
	for(i=num[k-1]+1;i<=n;i++){num[k]=i;dfs(k+1);num[k]=0;}
}
int main()
{
	cin>>n>>r;
	dfs(1);
	return 0;
}
