#include <bits/stdc++.h>
using namespace std;
struct cows{int v,x;}cow[200001];
long long voice(cows x,cows y){int s=max(x.v,y.v)*abs(x.x-y.x);return s;}
long long n,p,i,sum;
int main()
{
	cin>>n;
	for(i=1;i<=n;i++)cin>>cow[i].v>>cow[i].x;
	for(i=1;i<n;i++)for(p=i+1;p<=n;p++)sum+=voice(cow[i],cow[p]);
	cout<<sum;
	return 0;
}
