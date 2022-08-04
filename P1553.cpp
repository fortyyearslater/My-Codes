#include <bits/stdc++.h>
using namespace std;

string reverse(string in)
{
	string out;
	for(int i=in.length()-1;i>=0;i--)out+=in[i];
	return out;
}
string find(string in)
{
	if(in.find(".")<in.length())return "a";
	if(in.find("%")<in.length())return "b";
	if(in.find("/")<in.length())return "c";
	return "int";
}
void del(string &l,string &r,char type)
{
	int i;
	if(l!="0")
			{
			for(i=0;i<l.length();i++)
			{
				if(l[i]!='0')break;
				l[i]=NULL;
			}
		}
   if(r!="0")
	{
		if(type=='a')
		{
			for(i=r.length()-1;i>=0;i--)
	   		{
	   			if(r[i]!='0'||(r[i]=='0'&&i==0))break;
	   			r[i]=NULL;
	   		}	
		}
    	if(type=='c')
		{
			for(i=0;i<r.length();i++)
	   		{
	   			if(r[i]!='0')break;
	   			r[i]=NULL;
	   		}	
		}
	}
}
string in,l,r;
int i;
void execute(string in)
{
	if(find(in)=="a")
	{
		int pos=in.find(".");
		for(i=0;i<=pos-1;i++)l+=in[i];
		for(i=pos+1;i<in.length();i++)r+=in[i];
		l=reverse(l);
		r=reverse(r);
		del(l,r,'a');
		for(i=0;i<l.length();i++)if(l[i]!=NULL)printf("%c",l[i]);
		printf(".");
		for(i=0;i<r.length();i++)if(r[i]!=NULL)printf("%c",r[i]);
	}	
	if(find(in)=="b")
	{
		int pos=in.find("%");
		for(i=0;i<=pos-1;i++)l+=in[i];
		l=reverse(l);
		del(l,r,'a');
		for(i=0;i<l.length();i++)if(l[i]!=NULL)printf("%c",l[i]);
		cout<<"%";
	}
	if(find(in)=="c")
	{
		
		int pos=in.find("/");
		for(i=0;i<=pos-1;i++)l+=in[i];
		for(i=pos+1;i<in.length();i++)r+=in[i];
		if(r=="0")return;
		l=reverse(l);
		r=reverse(r);
		del(l,r,'c'); 
		for(i=0;i<l.length();i++)if(l[i]!=NULL)printf("%c",l[i]);
		printf("/");
		for(i=0;i<r.length();i++)if(r[i]!=NULL)printf("%c",r[i]);
	}
	if(find(in)=="int")
	{
		l=reverse(in);
		del(l,r,'a');
		for(i=0;i<l.length();i++)if(l[i]!=NULL)printf("%c",l[i]);
	}
}
int main()
{
	cin>>in;
	if(in=="0"){cout<<"0";return 0;}
	execute(in);
	return 0;
}
