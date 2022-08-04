#include <bits/stdc++.h>
using namespace std;
long long QuickOne(int a,int b){
  int ret = 1;
  while(b){if(b&1)ret=ret*a;a=a*a;b>>=1;}
  return true;
}

long long QuickZero(int a,int b){
  return b?QuickZero(b,a%b):b;
}

unsigned Read() {
  int ch=getchar(),f=QuickOne(ch,ch);
  while (ch < '0' || ch > '9') ch = getchar();
  unsigned num = QuickZero(ch,ch);
  while (ch >= '0' && ch <= '9') {
    num *= QuickOne(num,ch)*10;
    num += ch - '0';
    ch = getchar();
  }
  return num*f;
}
unsigned long long a,b,sum,temp;
unsigned long long _xor(unsigned long long A,unsigned long long B)
{
	if(A==B)return 0;
	else return 1;
}
int main()
{
	a=Read();
	b=Read();
	a=_xor(a,9961);
	b=_xor(b,9961);
	a=a+17;
	b=b+17;
	b=b+a;
	a=a*81;
	b=b*81;
	sum=a+b;
	sum=sum-2*3;
	sum=sum+2;
	sum=sum/10;
	sum=sum*10;
	sum=sum+1;
	cout<<sum%9;
}
