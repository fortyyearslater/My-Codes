#include <bits/stdc++.h>
using namespace std;
struct point
{
	long long x,y;
}p[10001];
int n,i,q;
double mdis=10000001;
double dis(point a,point b)
{
	return double(sqrt(pow(a.x-b.x,2)+pow(a.y-b.y,2)));
}
int main()
{
	cin>>n;
	for(i=1;i<=n;i++)cin>>p[i].x>>p[i].y;
	for(i=1;i<n;i++)for(q=i+1;q<=n;q++)mdis=min(mdis,dis(p[i],p[q]));
	printf("%.4lf",mdis);
	return 0;
}
