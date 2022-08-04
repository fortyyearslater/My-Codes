#include <bits/stdc++.h>
using namespace std;
int x,y,i,sum,a[1001];
int main()
{
	cin>>x>>y;
	for(i=x;i<=y;i++)
	{
		if(i%100==0)
		{
			if(i%400==0)
			{
				sum++;
				a[sum]=i;
			}
		}
		else if(i%4==0)
		{
			sum++;
			a[sum]=i;
		}
	}
	cout<<sum<<endl; 
	for(i=1;i<=sum;i++)cout<<a[i]<<" ";
	return 0;
}
