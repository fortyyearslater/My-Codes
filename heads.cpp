#include <bits/stdc++.h>
using namespace std;
int getstep(int in)
{
	if(in<10)return 1;
	else return 1+getstep(in/10);
}
//判断是否为质数
bool IsPrime(long long in)
{
    for(int i=2;i<=sqrt(in);i++)
    {
        if(in%i==0)return false;
    }
    return true;
}
//是否为对手（来自洛谷P5728)
bool IsEnemy(long long p[4],long long j[4])
{
    if(abs(p[1]-j[1])<=5)
    {
        if(abs(p[2]-j[2])<=5)
        {
            if(abs(p[3]-j[3])<=5)
			{
				if(abs((p[1]+p[2]+p[3])-(j[1]+j[2]+j[3]))<=10)return false;
			}
        }
    }
    return true;
}
//坐标轴距离(P5735)
long long dis(long long a1,long long b1,long long a2,long long b2)
{
    long long temp;
    temp=pow(abs(a1-b1),2)+pow(abs(a2-b2),2); 
    return sqrt(temp);
}
------------------------------------- 
#include <bits/stdc++.h>
using namespace std;
char itoc(int in){return char(in+'0');}
string splus(string x,string y)
{
	int i,lena=x.length(),lenb=y.length(),maxlen=max(lena,lenb),a[10001],b[10001];
	int c[10001],g=0;
	memset(a,0,10000);memset(b,0,10000);memset(c,0,10000);
	for(i=1;i<=lena;i++)a[i]=x[lena-i]-'0';for(i=1;i<=lenb;i++)b[i]=y[lenb-i]-'0';
	string t;
	for(i=1;i<=maxlen;i++)
	{
		c[i]=x.num[i]+y.num[i]+g;
		g=c[i]/10;
		c[i]=c[i]%10;
	}
	if(g>0){maxlen++;c[maxlen]=g;};
	for(i=maxlen;i>=1;i--)t+=itoc(c[i]);
	return t;
}
string temp;
int i;
int main()
{
	cin>>n[1].in>>n[2].in;
	n[1].init();n[2].init();
	cout<<h_plus(n[1],n[2]);
	return 0;
}
-------------------------------------------
int main()
{
    long long a,b,i;
    cin>>a;
    if(IsPrime(a))cout<<"Prime"<<endl;
    else cout<<"Not a prime"<<endl;
    return 0;
}
