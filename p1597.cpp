#include<bits/stdc++.h>
using namespace std;
int pos,i;
int ctoi(char c)
{
	if(c=='\0')return 0;
	return int(c-'0');
}
char num[130];
string in;
int main()
{
	getline(cin,in);
	for(i=0;i<=in.length();i++)
	{
		int found=in.find("=",i);
		if(found==i)
		{
			char l=in[i-2],r=in[i+1];
			if(r>='a'&&r<='c')num[l]=num[r];
			else if(r!=' ')num[l]=r;	
		}
	}
	printf("%d %d %d",ctoi(num['a']),ctoi(num['b']),ctoi(num['c']));
    return 0;
}
