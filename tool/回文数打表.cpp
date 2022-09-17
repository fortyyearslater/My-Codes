#include <bits/stdc++.h>
using namespace std;
int a,b,isprime,i;
int main()
{
	freopen("ÖÊÊı±í(0~114514).txt","w",stdout);
	printf("%d\n%d\n%d\n",2,3,5);
	for(a=7;a<=114514;a++)
	{
		isprime=true;
		for(b=2;b*b<=a;b++)
		{
			if(a%b==0)
			{
				isprime=false;
				break;
			}
		}
		if(isprime==true)printf("%d\n",a);
	}
	system("exit");
	return 0;
}
