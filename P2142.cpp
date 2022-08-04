#include <bits/stdc++.h>
using namespace std;
char itoc(int in){return char(in+'0');}
string sminus(string x,string y)
{
	int lena=x.length(),lenb=y.length(),lenc,c[20001],i,a[20001],b[20001];
	memset(a,0,20000);memset(b,0,20000);memset(c,0,20000);
	for(i=1;i<=lena;i++)a[i]=x[lena-i]-'0';for(i=1;i<=lenb;i++)b[i]=y[lenb-i]-'0';
	string t;
	i=1;
	while(i<=lena||i<=lenb)
	{
		if(a[i]<b[i])
		{
			a[i]+=10;              
			a[i+1]--;
		}
		c[i]=a[i]-b[i];                        
		i++;
	}
	lenc=i;
	while((c[lenc]==0)&&(lenc>1))lenc--;
	for(i=lenc;i>=1;i--)t+=itoc(c[i]);
	return t;
}
string a,b,ans;
int main()
{
	cin>>a>>b;
	int lenx=a.length(),leny=b.length();
	if(lenx==leny)
	{
		if(a>=b)ans=sminus(a,b);
		else{ans+='-';ans+=sminus(b,a);}
	}
	else{
		if(lenx>=leny)ans=sminus(a,b);
		else{ans+='-';ans+=sminus(b,a);}}
	cout<<ans;
	return 0;
}
