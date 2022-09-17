#include <iostream>
using namespace std;
int f[10001],c,n,w[10001],v[10001],mv,sum;
int main()
{
	std::ios::sync_with_stdio(false);
	cin>>mv>>n>>c;
	for(int i=1;i<=n;i++){cin>>v[i]>>w[i];sum+=v[i];}
	if(sum<mv){cout<<"Impossible";return 0;}
	for(int i=1;i<=n;i++)
		for(int j=c;j>=w[i];j--)
			f[j]=max(f[j],f[j-w[i]]+v[i]);
	for(int i=0;i<=mv;i++)if(f[i]>=mv){cout<<c-i;return 0;}
	cout<<"Impossible";
	return 0;
}
