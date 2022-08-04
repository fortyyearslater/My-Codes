#include <bits/stdc++.h>
using namespace std;
bool flag;
char itoc(int in){return char(in+'0');}
string reverse(string str)
{
	string t;
	for(int i=str.length()-1;i>=0;i--)t+=str[i];
	return t;
}
string splus(string x,string y)
{
	int i,lena=x.length(),lenb=y.length(),maxlen=max(lena,lenb),a[10001],b[10001],c[10001],g=0;
	memset(a,0,10000);memset(a,0,10000);memset(c,0,10000);
	for(i=1;i<=lena;i++)a[i]=x[lena-i]-'0';
	for(i=1;i<=lenb;i++)b[i]=y[lenb-i]-'0';
	string t;t.clear();
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
void work(string n)
{
	string t,o;
	int i,mid,len=n.length();
	t.clear();o.clear();
    if(len%2==0)
	{
		mid=len/2-1;
		for(i=0;i<=mid;i++)o+=n[i];
		o+=reverse(o);
		if(o<=n)
		{
			for(i=0;i<mid;i++)t+=o[i];
			for(i=mid;i<=mid+1;i++)t+=char(int(o[i])+1);
			for(i=mid+2;i<len;i++)t+=o[i];
			o.clear();
			o+=t;
		}
		if(o[mid]=='9'+1)
		{
			o[0]='1';
			for(i=1;i<=o.length();i++)o[i]='0';
			work(o);
			return;
		}
	}
	if(len%2==1)
	{
		mid=len/2;
		for(i=0;i<=mid;i++)o+=n[i];
		for(i=mid-1;i>=0;i--)o+=o[i];
		if(o<=n)
		{
			
			for(i=0;i<mid;i++)t+=o[i];
			t+=char(int(o[mid])+1);
			for(i=mid+1;i<len;i++)t+=o[i];	
			o.clear();
			o+=t;
		}
		if(o[mid]=='9'+1)
		{
			o[0]='1';
			for(i=1;i<=o.length();i++)o[i]='0';
			work(o);
			return;
		}
	} 
	cout<<o;
	return;
}
int main()
{
	string plus,s;
	cin>>s;
	int l=s.length();
	for(int i=0;i<l;i++)if(s[i]!='9'){work(s);return 0;}
	plus=splus(s,"1");
	work(plus);
	return 0;
}
