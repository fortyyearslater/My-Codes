#include<bits/stdc++.h>
using namespace std;
string num;
int n[4];
int getstep(int in)
{
	if(in<10)return 1;
	else return 1+getstep(in/10);
}
char itoa(int in)
{
	int step=getstep(in);
	//if(in==0)
}
int getcheck(int* in)
{
	
}
int getnum(int* in,string &num)
{
	int i;
	char temp;
	
	 
}
int main()
{ 
    /*int x1,x2,x3,x4,x5,x6,x7,x8,x9,x10i;
    char x10,tc;
    scanf("%d-%d-%d-%c",&x1,&x2,&x5,&x10);
    if(x10<=57)
    {
	x10=x10-48;
}
	else x10=10;
    x3=x2%100/10;
    x4=x2%1000/100;
    x2=x2%10;
    x6=x5%100/10;
    x7=x5%1000/100;
    x8=x5%10000/1000;
    x9=x5%100000/10000;
    x5=x5%10;
    tc=(x1+x4*2+x3*3+x2*4+x9*5+x8*6+x7*7+x6*8+x5*9)%11;
    if(tc!=x10&&tc!=10)printf("%d-%d%d%d-%d%d%d%d%d-%d",x1,x4,x3,x2,x9,x8,x7,x6,x5,tc);
    else if(tc==x10)printf("Right");
    else if(tc==10)printf("%d-%d%d%d-%d%d%d%d%d-X",x1,x4,x3,x2,x9,x8,x7,x6,x5);
    return 0;
    */
	
    return 0;
}
