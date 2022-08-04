#include <bits/stdc++.h>
using namespace std;
int a[1000]={0},b=1,sum=0,i=0,n=0,t=0,temp,maxn=1,minn=1,ans=0,logt[101];
int main()
{
string in;
cin>>in;
for(i=1;i<=in.length();i++)
{
   a[int(in[i])]++;
   logt[i]=int(in[i]);
   printf("%d \n",a[int(in[i])]);
}
for(i=1;i<=1000;i++)printf("%d %d ",a[logt[i]],a[logt[i+1]]);								
/*maxn=a[10000];
minn=a[0];
ans=maxn-minn;
if(ans==0)
{
	printf("No Answer\n0");
	return 0;
}
if(ans==1)
{
printf("Lucky Word\n1");
return 0;
}
for(i=2;i<sqrt(ans);i++)
{
	if((ans%i)==0)
	{
		printf("No Answer\n0");
		return 0;
	}
}
printf("Lucky Word\n%d",ans);
*/
return 0;
}
