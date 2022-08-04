#include <bits/stdc++.h>
using namespace std;
int a[10],t,m,n,p,step,i;
int getstep(int in)
{
	if(in<10)return 1;
	else return 1+getstep(in/10);
}
int main()
{
	cin>>m>>n;
	for(i=m;i<=n;i++)
	{
		t=i;
		for(p=1;p<=getstep(i);p++)
		{	
			a[t%10]++;
			t=t/10;
		}
	}
	for(i=0;i<=9;i++)cout<<a[i]<<" ";
	return 0;
}
