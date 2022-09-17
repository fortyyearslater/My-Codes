#include <bits/stdc++.h>
using namespace std;
int n,p,x,y,z,a[11451419],d[11451419],minn=101;
int main()
{
	std::ios::sync_with_stdio(false);
	cin>>n>>p;
	for(int i=1;i<=n;i++)cin>>a[i];
	for(int i=1;i<=n;i++)d[i]=a[i]-a[i-1];
	for(int i=0;i<p;i++){cin>>x>>y>>z;d[x]+=z;d[y+1]-=z;}
	for(int i=1;i<=n;i++){a[i]=a[i-1]+d[i];minn=min(a[i],minn);}
	cout<<minn;
	return 0;
}
