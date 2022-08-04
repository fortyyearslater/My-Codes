#include <bits/stdc++.h>
using namespace std;
int i,p,q,t,n;
double s,v;
//笔记:ceil()向上取整
void out(int T)//计算并输出时间
{
	int n=8*60;
    int h,m,t;
    if(T>=n)
    {
    	t=T-n;
    	h=t/60;
  		m=t%60;
  		if(m==0)
  		{
  			h=24-h;
			if(h<10)
			{
				cout<<"0"<<h<<":";	
			}
			else cout<<h<<":";
  			if(m<10)cout<<"0"<<m;
			else cout<<m;	
		}
		h=23-h;
		m=60-m;
		if(h<10)
		{
			cout<<"0"<<h<<":";	
		}
		else cout<<h<<":";
  		if(m<10)cout<<"0"<<m;
		else cout<<m;	
	}
	if(T<n)
	{
		t=n-T;
    	h=t/60;
  		m=t%60;
  		if(m==0)
  		{
			if(h<10)
			{
				cout<<"0"<<h<<":";	
			}
			else cout<<h<<":";
  			if(m<10)cout<<"0"<<m;
			else cout<<m;
		}
		if(m>0)
		{
		if(h<10)
		{
			cout<<"0"<<h<<":";	
		}
		else cout<<h<<":";
  		if(m<10)cout<<"0"<<m;
		else cout<<m;
		}	
	}
    
}
int main()
{
    cin>>s>>v;
    t=ceil(s/v)+10;
    out(t);
    return 0;
}
