#include <bits/stdc++.h>
using namespace std;
int t;
int i,p,q,use[10]/*[1]=1,[2]=2......*/;
int a,b,c,d[10],total=1;
int flag;
int main()
{
	for(a=123;a<=333;a++)//a
	{
		flag=0;
		b=a*2;
		c=a*3;
		d[1]=a/100;
		d[2]=a/10%10;
		d[3]=a%10;
		d[4]=b/100;
		d[5]=b/10%10;
		d[6]=b%10;
		d[7]=c/100;
		d[8]=c/10%10;
		d[9]=c%10;
		if(((d[1]+d[2]+d[3])+(d[4]+d[5]+d[6])+(d[7]+d[8]+d[9]))==45)
		{
			total=d[1]*d[2]*d[3]*d[4]*d[5]*d[6]*d[7]*d[8]*d[9];
			if(total==1*2*3*4*5*6*7*8*9)
			{
				cout<<a<<" "<<b<<" "<<c<<endl;
			}
		}
	}
	return 0;
}
