#include <bits/stdc++.h>
using namespace std;
const string itos[13]={"0","1","2","3","4","5","6","7","8","9","10","11","12"};
char itoc(int in){return char(in+'0');}
struct sint
{
	int num[10001],i;
	string str;
	void reset(){str.clear();str="1";}
	int len(){return str.length();}
	void init(){for(i=1;i<=len();i++)num[i]=str[len()-i]-'0';}
};
string splus(sint x,sint y)
{
	x.init();y.init();
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
	x.init();y.init();
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
	for(i=leno;i>=1;i--)t+=itoc(o[i]);
	return t;
}
string sminus(string x,string y)
{
	int lena=x.length(),lenb=y.length(),leno,o[10101],i=1,a[10101],b[10101];
	memset(a,0,10100);memset(b,0,10100);memset(o,0,10100);
	for(i=1;i<=lena;i++)a[i]=x[lena-i]-'0';for(i=1;i<=lenb;i++)b[i]=y[lenb-i]-'0';
	string t;
	while(i<=lena||i<=lenb)
	{
		if(a[i]<b[i])
		{
			a[i]+=10;              
			b[i+1]--;
		}
		o[i]=a[i]-b[i];                        
		i++;
	}
	leno=i;
	while((o[leno]==0)&&(leno>1))leno--;
	for(i=leno;i>=1;i--)t+=itoc(o[i]);
	return t;
}
string sjc(int s)
{
	if(s==1)return "1";
	sint X,Y,a,b;
	X.str=sjc(s-1);
	Y.str=itos[s];
	b.str=itos[2];
	a.str=smultiply(X,Y);
	if(s>=3)a.str=sminus(a,b);
	return a.str;
}
sint ans,t;
int i,n;
int main()
{
	cin>>n;
	for(i=1;i<=n;i++)
	{
		t.reset();
		t.str=sjc(i);
		ans.str=splus(ans,t);
	}
	cout<<ans.str;
	return 0;
}
