#include <bits/stdc++.h>
using namespace std;
char itoc(int in){return char(in+'0');}
struct sint
{
	int num[10001],i;
	string in;
	int len(){return in.length();}
	void init()
	{memset(num,0,10001)for(i=1;i<=len();i++)num[i]=in[len()-i]-'0';}
}n[3];
string splus(sint x,sint y)
{
	int i,lena=x.len(),lenb=y.len(),maxlen=max(lena,lenb);
	int c[10001],g=0;
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
string smultiply(sint x,sint y)
{
	int lena=x.len(),lenb=y.len(),leno,i,j,o[10001],d;
	string t;
	for(i=1;i<=lena;i++)
	{
		d=0;                                      
		for(j=1;j<=lenb;j++)                     
		{
			o[i+j-1]+=x.num[i]*y.num[j]+d;    
			d=o[i+j-1]/10;	 
			o[i+j-1]%=10;
		}
		o[i+lenb]=d;                                  
	}
	leno=lena+lenb;
	while(o[leno]==0&&leno>1)leno--;
	for(i=leno;i>=1;i--)t+=char(o[i]+'0');
	return t;
}
string sminus(sint x,sint y)
{
	x.init(),y.init();
	int lena=x.len(),lenb=y.len(),leno,o[10001],i=1;
	string t;
	while(i<=lena||i<=lenb)
	{
		if(x.num[i]<y.num[i])
		{
			x.num[i]+=10;              
			y.num[i+1]--;
		}
		o[i]=x.num[i]-y.num[i];                        
		i++;
	}
	leno=i;
	while((o[leno]==0)&&(leno>1))leno--;
	for(i=leno;i>=1;i--)t+=itoc(o[i]);
	return t;
}
string temp;
int i;
int main()
{
	cin>>n[1].in>>n[2].in;
	n[1].init();n[2].init();
	cout<<sminus(n[1],n[2]);
	return 0;
}
