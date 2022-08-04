#include <bits/stdc++.h>
using namespace std;
int l,m;
int tree[100000],sum;
int i,a,b;
int u,v;
int main()
{
	cin>>l>>m;
	for(i=1;i<=m;i++)
	{
		cin>>u>>v;
		for(a=u;a<=v;a++)
		{
			tree[a]=1;
		}
	}
	for(i=0;i<=l;i++)
	{
		if(tree[i]==0)sum++;
	}
	cout<<sum;
	return 0;
}
