#include <bits/stdc++.h>
using namespace std;
string n,t,o;
string reverse(string str)
{
	string t;
	for(int i=str.length()-1;i>=0;i--)t+=str[i];
	return t;
}
int i,mid,len;
int main()
{
	cin>>n;
	len=n.length();
	
	if(len%2==0)
	{
		mid=len/2-1;
		while(n[i++]=='9')
		{
			if(i==mid+1)for(n[0]='1',mid++;i>0;i--)n[i]='0';
			else
			{
				for(i=0;i<=mid;i++)o+=n[i];
				o+=reverse(o);
				if(o<=n)
				{
					for(i=0;i<mid;i++)cout<<o[i];
					for(i=mid;i<=mid+1;i++)cout<<char(int(o[i])+1);
					for(i=mid+2;i<len;i++)cout<<o[i];
					return 0;
				}
			}
		}
		cout<<o;
	}
	if(len%2==1)
	{
		mid=len/2;
		for(i=0;i<=mid;i++)o+=n[i];
		t=reverse(o);
		for(i=1;i<t.length();i++)o+=t[i];
		if(o<=n)
		{
			for(i=0;i<mid;i++)cout<<n[i];
			cout<<char(int(n[i])+1);
			for(i=mid+1;i<len;i++)cout<<n[i];	
			return 0;
		}
		cout<<o;
	}
	return 0;
}
