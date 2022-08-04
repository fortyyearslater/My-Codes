#include <bits/stdc++.h>
#include <cstring>
using namespace std;
int main()
{
int n,k,i,aa=0,ba=0,ag=0,bg=0;
double pj1,pj2;
scanf("%d %d",&n,&k);
for(i=1;i<=n;i++)
{
	if((i%k)==0)
	{
		aa=aa+i;
		ag++;
	}
	else if((i%k)!=0)
	{
		ba=ba+i;
	}
}
pj1=aa/(ag)+aa%(ag);
pj2=ba/(n-ag);
printf("%.1lf %.1lf",pj1,pj2);
}
