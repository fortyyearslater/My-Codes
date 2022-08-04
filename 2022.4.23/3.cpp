#include <bits/stdc++.h>
using namespace std;
struct A
{
	int num[8];
	string all;
}num[100001];
bool cmp(A a,A b)
{
	if(a.all!=b.all)return a.all>b.all;
}
void standard(string numin,int code)
{
	int cnt=1,i;
	for(i=0;i<numin.length();i++)
	{
		if(cnt>7)break;
		char temp=numin[i];
		int out;
		if(temp=='-'||temp=='Q'||temp=='Z')continue;
		if(temp>='0'&&temp<='9')
		{
			if(temp=='0')out=0;
			if(temp=='1')out=1;
			if(temp=='2')out=2;
			if(temp=='3')out=3;
			if(temp=='4')out=4;
			if(temp=='5')out=5;
			if(temp=='6')out=6;
			if(temp=='7')out=7;
			if(temp=='8')out=8;
			if(temp=='9')out=9;
		}
		
	    if(temp<'Z'&&temp>='A')
		{
			if(temp=='A'||temp=='B'||temp=='C')out=2;
			if(temp=='D'||temp=='E'||temp=='F')out=3;
			if(temp=='G'||temp=='H'||temp=='I')out=4;
			if(temp=='J'||temp=='K'||temp=='L')out=5;
			if(temp=='M'||temp=='N'||temp=='O')out=6;
			if(temp=='P'||temp=='R'||temp=='S')out=7;
			if(temp=='T'||temp=='U'||temp=='V')out=8;
			if(temp=='W'||temp=='X'||temp=='Y')out=9;
		}
		num[code].num[cnt]=out;
		num[code].all[cnt]=temp;
		cnt++;
	}
}
string temp;
int i,o,p,q,n;
int main()
{
	cin>>n;
	for(i=1;i<=n;i++)
	{
		cin>>temp;	
		standard(temp,i);
	}
	sort(num+0,num+0+n,cmp);
	int flag=0,times=1;
	for (int i=0;i<n;i++)
    {
       if(num[i].all==num[i+1].all)  flag=1,times++;
       else if (times>1) 
	   {
	   	for(p=1;p<=3;p++)cout<<num[i].num[p];
	    printf("-");
	    for(p=4;p<=7;p++)cout<<num[i].num[p];
        printf(" %d\n",times);
	    times=1;
	   }
    }
    if (!flag) printf("No duplicates.\n");
	return 0;
}
