#include <bits/stdc++.h>
using namespace std;
int i,sum=1;
char* temp;
int main()
{
	cin>>temp;
	for(i=0;i<temp.length();i++)
	{
		if(temp[i]=='a')sum=sum+1;
		if(temp[i]=='b')sum=sum+2;
		if(temp[i]=='c')sum=sum+3;
		if(temp[i]=='d')sum=sum+1;																						
		if(temp[i]=='e')sum=sum+2;
		if(temp[i]=='f')sum=sum+3;
		if(temp[i]=='g')sum=sum+1;
		if(temp[i]=='h')sum=sum+2;
		if(temp[i]=='i')sum=sum+3;
		if(temp[i]=='j')sum=sum+1;
		if(temp[i]=='k')sum=sum+2;
		if(temp[i]=='l')sum=sum+3;
		if(temp[i]=='m')sum=sum+1;
		if(temp[i]=='n')sum=sum+2;
		if(temp[i]=='o')sum=sum+3;
		if(temp[i]=='p')sum=sum+1;
		if(temp[i]=='q')sum=sum+2;
		if(temp[i]=='r')sum=sum+3;
		if(temp[i]=='s')sum=sum+4;
		if(temp[i]=='t')sum=sum+1;
		if(temp[i]=='u')sum=sum+2;
		if(temp[i]=='v')sum=sum+3;
		if(temp[i]=='w')sum=sum+1;
		if(temp[i]=='x')sum=sum+2;
		if(temp[i]=='y')sum=sum+3;
		if(temp[i]=='z')sum=sum+4;
		if(temp[i]==' ')sum=sum+1;
	}
	printf("%d",sum);
    return 0;
}
