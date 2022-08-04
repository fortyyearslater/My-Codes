#include <bits/stdc++.h>
using namespace std;
int a,b,fzs,i;
int main()
{
	FILE *fp;
	fp=fopen("ÖÊÊý±í(0~10000).txt","w+");
	fprintf(fp,"%d %d %d ",2,3,5);
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
			fprintf(fp,"%d ",a);
		}
	}
	fclose(fp);
	return 0;
}
