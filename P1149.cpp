#include <bits/stdc++.h>
using namespace std;
int func(int x)
{
	int num=0,f[10]={6,2,5,5,4,5,6,3,7,6};
	while(x/10!=0){num+=f[x%10];x/=10;}
	num+=f[x];
	return num;
}
int a,b,c,m,sum=0;
int main()
{
	cin>>m;
	for(a=0;a<=1111;a++)for(b=0;b<=1111;b++){c=a+b;if(func(a)+func(b)+func(c)==m-4)sum++;}
	cout<<sum;
	return 0;
}
