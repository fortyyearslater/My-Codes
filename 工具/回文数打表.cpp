#include <bits/stdc++.h>
using namespace std;
int a,b,fzs,i;
int main()
{
	freopen("质数表(0~10000).txt","w",stdout);
	printf("%d %d %d ",2,3,5);
	for(a=7;a<=10000;a++)
	{
		fzs=0;
		for(b=2;b<=(a-1)/2;b++)
		{
			if(a%b==0)
			{
				fzs=1;
				break;
			}
		}
		if(fzs==0)
		{
			printf("%d ",a);
		}
	}
	freopen("CON","w",stdout); 	
	cout<<"生成成功！";
	return 0;
}
