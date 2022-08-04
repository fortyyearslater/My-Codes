#include <bits/stdc++.h>
using namespace std;
int n,i,a,b[1001],c[1001];
void detect(int B,int C)
{
	double sum1=0.7*B+0.3*C,sum2=B+C;
	if(sum1>=80&&sum2>140)cout<<"Excellent"<<endl;
	else cout<<"Not excellent"<<endl;
}
int main()
{
	cin>>n;
	for(i=1;i<=n;i++)cin>>a>>b[i]>>c[i];
	for(i=1;i<=n;i++)detect(b[i],c[i]);
	return 0;
}
