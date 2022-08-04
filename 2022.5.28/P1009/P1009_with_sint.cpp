#include <bits/stdc++.h>
using namespace std;
const string itos[51]={"0","1","2","3","4","5","6","7","8","9","10","11","12","13","14","15","16","17","18","19","20","21","22","23","24","25","26","27","28","29","30","31","32","33","34","35","36","37","38","39","40","41","42","43","44","45","46","47","48","49","50"};
char itoc(int in){return char(in+'0');}
string splus(string x,string y)
{
	int i,lena=x.length(),lenb=y.length(),maxlen=max(lena,lenb);
	int a[10001],b[10001],c[10001],g=0;
	for(int i=1;i<=x.length();i++)a[i]=x[x.length()-i]-'0';
	for(int i=1;i<=y.length();i++)b[i]=y[y.length()-i]-'0';
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
string smultiply(string x,string y)
{
	int lena=x.length(),lenb=y.length(),lenc,i,j,a[10001],b[10001],c[10001],d;
	memset(a,0,10001);memset(b,0,10001);memset(c,0,10001);//живЊ!!!!!!! 
	for(int i=1;i<=x.length();i++)a[i]=x[x.length()-i]-'0';
	for(int i=1;i<=y.length();i++)b[i]=y[y.length()-i]-'0';
	string t;
	for(i=1;i<=lena;i++)
	{
		d=0;
		for(j=1;j<=lenb;j++)                     
		{
			c[i+j-1]+=a[i]*b[j]+d;    
			d=c[i+j-1]/10;	 
			c[i+j-1]%=10;
		}
		c[i+lenb]=d;                                  
	}
	lenc=lena+lenb;
	while(c[lenc]==0&&lenc>1)lenc--;
	for(i=lenc;i>=1;i--)t+=itoc(c[i]);
	return t;
}
string jc(int s){if(s==1)return "1";else return smultiply(jc(s-1),itos[s]);}
string ans;
int i,n;
int main()
{
	cin>>n;
	for(i=1;i<=n;i++)ans=splus(ans,jc(i));
	cout<<ans;
	return 0;
}
