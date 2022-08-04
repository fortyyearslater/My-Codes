#include <bits/stdc++.h>
using namespace std;
string insert_in(string a,string b,int pos)
{
	string x,y;
	int i;
	for(i=0;i<pos;i++)x+=a[i];
	for(i=pos;i<a.length();i++)y+=a[i];
	return x+b+y;
}
string insert_back(string a,string b)
{
	return a+b;
}
string del(string a,int l,int cnt)
{
	string b;
	int i;
	for(i=l;i<l+cnt;i++)b+=a[i];
	return b;
}
int find(string a,string b)
{
	int found=a.find(b);
	if(found<a.length())return found;
	return -1;
}
void select(int opr,string &in)
{
	string t;
	int a,b,pos;
	if(opr==1)
	{
		cin>>t;
		in=insert_back(in,t);
		cout<<in<<endl;
	}
	if(opr==2)
	{
		cin>>a>>b;
		in=del(in,a,b);
		cout<<in<<endl;
	}
	if(opr==3)
	{
		cin>>pos>>t;
		in=insert_in(in,t,pos);
		cout<<in<<endl;
	}
	if(opr==4)
	{
		cin>>t;
		pos=find(in,t);
		cout<<pos<<endl;
	}
}
int i,p,q,n,c;
string in;
int main()
{
	cin>>n;
	cin>>in;
	for(i=1;i<=n;i++)
	{
		cin>>c;
		select(c,in);
	}
	return 0;
}
