#include <bits/stdc++.h>
using namespace std;
long long k,a,n,i,p,t;
int main()
{
	cin>>n;
	for(i=1;i<=n;i++)
	{
		cin>>k>>a;
		t=pow(10,k)-1;
		if((a%t)==0)cout<<"aya"<<endl;
		else cout<<"baka"<<endl;
	}
	return 0;
}
