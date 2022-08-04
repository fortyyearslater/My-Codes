#include <bits/stdc++.h>
using namespace std;
struct a
{
	int num;
	int a,b,c;
}num[4];
void get(a &T)
{
	T.a=T.num/100;
	T.b=T.num/10-T.a*10;
	T.c=T.num-100*T.a-10*T.b;
}
void reset(int* N)
{
	for(int i=1;i<=9;i++)N[i]=0;
}
bool IsThree(a A,a B,a C)
{
	if(A.num>=1000||B.num>=1000||C.num>=1000)return false;
	return true;
}
int i,p,q,n,o[4],t,use[10];
int t1,t2,t3,sum,cnt;
int main()
{
	for(i=1;i<=3;i++)cin>>o[i];
	for(i=1;IsThree(num[1],num[2],num[3]);i++)
	{
		for(p=1;p<=3;p++)num[p].num=i*o[p];
		if(IsThree(num[1],num[2],num[3]))
		{
			reset(use);
			for(q=1;q<=3;q++)
			{
				get(num[q]);
				use[num[q].a]++;
				use[num[q].b]++;
				use[num[q].c]++;
			}
			for(q=1;q<=9;q++)if(use[q]==1)sum++;
			if(sum==9)
			{ 
				cout<<num[1].num<<" "<<num[2].num<<" "<<num[3].num<<endl;
				cnt++;	
			}
			sum=0;	
		}
	}
	if(cnt==0)cout<<"No!!!"<<endl;
	return 0;
}
