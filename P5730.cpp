#include <bits/stdc++.h>
using namespace std;
int ctoi(char c)
{
	if(c=='\0')return 0;
	return int(c-'0');
}
struct table
{
	string line[4]; 
}s[11];
void out(char num,int line)
{
	int i,p,q;
	if(line==1)
	{
		if(num=='0')
		{
			
		}
		if(num=='1')
		{
			
		}
		if(num=='2')
		{
			
		}
		if(num=='3')
		{
			
		}
		if(num=='4')
		{
			
		}
		if(num=='5')
		{
			
		}
	}
}
string str;
s[1].line=
int i,len,n,p;
int main()
{
	cin>>n;
	cin>>str;
	len=str.length();
	for(i=1;i<=5;i++)
	{
		for(p=0;p<len;p++)
		{
			out(str[p],i);
		}
		cout<<endl;
	}
	return 0;
}
