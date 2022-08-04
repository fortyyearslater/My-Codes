#include <bits/stdc++.h>
using namespace std;
struct gj
{
    int len,s[9999];
    gj()
    {
        memset(s,0,sizeof(s));
        len=1;
    }
    gj operator=(const char*num)
    {
        len=strlen(num);
        for(int i=0;i<len;++i)
            s[i]=num[len-i-1]-'0';
        return *this;
    }
    gj operator=(const int num)
    {
        char a[9999];
        sprintf(a,"%d",num);
        *this=a;
        return *this;
    }
    gj (const int num)
    {
        *this=num;
    }
    gj (const char * num)
    {
        *this=num;
    }
    gj operator+(const gj &a)  
    {
        gj c;
        c.len=max(len,a.len)+1;           
        for(int i=0,x=0;i<c.len;++i)
        {
            c.s[i]=s[i]+a.s[i]+x;
            x=c.s[i]/10;
            c.s[i]=c.s[i]%10;
        }
        if(c.s[c.len-1]==0)
            --c.len;
        return c;
    }
    gj operator * (const gj &x)         
    {
        gj c;
        c.len=len+x.len;                 
        for(int i=0;i<len;++i)
            for(int j=0;j<x.len;++j)
            {
                c.s[i+j]+=s[i]*x.s[j];
                c.s[i+j+1]+=c.s[i+j]/10;
                c.s[i+j]%=10;
            }
        if(c.s[c.len-1]==0)
            --c.len;
        return c;
    }
};
ostream& operator<<(ostream &o,const gj& x)
{
    for(int i=x.len-1;i>=0;--i)
        cout<<x.s[i];
    return o;
}
istream& operator>>(istream &in,gj &x)
{
    char num[9999];
    in>>num;
    x=num;
    return in;
}
gj a;
int i,p,n;
int main()
{
	cin>>n;
	for(i=1;i<=n;i++)
	{
		for(p=1;p<=i;p++)
		{
			a=a*p;
		}
	}
	cout<<a;
	return 0;
}
