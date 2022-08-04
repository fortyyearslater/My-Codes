#include <bits/stdc++.h>
using namespace std;
int n,a[1001],maxn,i,p,t;
int main()
{
	cin>>n;
	for(i=1;i<=n;i++)cin>>a[i];
	for(i=1;i<n;i++)
	{
		for(p=i+1;p<=n;p++)
		{
			t=abs(a[i]-a[p]);
			if(maxn<t)maxn=t;
		}
	}
	cout<<maxn;
	return 0;
}
