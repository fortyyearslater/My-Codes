#include <bits/stdc++.h>
using namespace std;
char itoc(int in){return char(in+'0');}
string splus(string x,string y)
{
	int i,lena=x.length(),lenb=y.length(),maxlen=max(lena,lenb),a[10001],b[10001];
	memset(a,0,10000);memset(b,0,10000);
	for(i=1;i<=lena;i++)a[i]=x[lena-i]-'0';for(i=1;i<=lenb;i++)b[i]=y[lenb-i]-'0';
	int c[10001],g=0;
	string t;
	for(i=1;i<=maxlen;i++)
	{
		c[i]=a[i]+b[i]+g;
		g=c[i]/10;
		c[i]=c[i]%10;
	}
	if(g>0){maxlen++;c[maxlen]=g;};
	for(i=maxlen;i>=1;i--)t+=itoc(c[i]);
	return t;
}
void work(string str)
{
	string o;
	int i,mid,len=str.length();
	o.clear();
  	bool isdouble;
  	if(len%2==0)isdouble=true;
  	mid=len/2;
  	if(isdouble)mid--;
  	for(i=0;i<=mid;i++)o+=str[i];
  	if(isdouble)for(i=mid;i>=0;i--)o+=str[i];
  	else for(i=mid-1;i>=0;i--)o+=str[i];
  	if(o<=str)
  	{
  		if(o[mid]=='9')
		{
			for(int i=1;i<o.length();i++)o[i]='0';
			o[0]+=1;
			work(o);
			return;
		}
  		if(isdouble)for(i=mid;i<=mid+1;i++)o[i]+=1;
  		else o[mid]+=1;
	}
	cout<<o;
	return;
}
int main()
{
	string n,m;
	m.clear();
	cin>>n;
	for(int i=0;i<n.length();i++)if(n[i]!='9'){work(n);return 0;}
	m=splus(n,"1");
	work(m);
	return 0;
}
