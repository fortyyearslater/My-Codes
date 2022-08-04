#include <bits/stdc++.h>
using namespace std;
long long m=0,tar,q=0,i;
int main()
{

	for(i=1;i<=12;i++)
	{
		cin>>tar;
		q=q+300;
		if(q<tar)
		{
			cout<<"-"<<i;
			return 0;
		}
		q=q-tar;
		m=m+(q/100);
		q=q%100;
	}
	printf("%lf",q+120*m);
	return 0;
}

