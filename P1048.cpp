#include <iostream>
using namespace std;
int f[1001],c,n,w[101],v[101];
int main()
{
	cin>>c>>n;
	for(int i=1;i<=n;i++)cin>>w[i]>>v[i];
	for(int i=1;i<=n;i++)for(int j=c;j>=w[i];j--)f[j]=max(f[j],f[j-w[i]]+v[i]);
	cout<<f[c];
	return 0;
}
