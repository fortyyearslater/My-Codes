#include <bits/stdc++.h>
using namespace std;
int n,d,m[100000000],i,p,q;
int main()
{
		long long sum=1;
		cin>>n>>d;
		for(p=1;p<=d;p++)
		{
			for(q=1;q<=n;q++)cin>>m[(p-1)*2+q];	
		}
		sort(m+1,m+d*n);
		for(p=1;p<=3;p++)sum=sum*m[p];
		cout<<sum%804;
		return 0;
}
