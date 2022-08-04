#include <bits/stdc++.h>
using namespace std;
int n,m,i,k,sum,l;
int main()
{
	cin>>n>>m;
	l=n;
	sum=sum+n;
	for(i=2;i<=m;i++)
	{
		cin>>k;
		l=l+k*20;
		sum=sum+l;
	}
	cout<<sum;
}
