#include <bits/stdc++.h>
using namespace std;
struct cha
{
	char c;
}c[1001];
string in;
bool cmp(cha a,cha b)
{
	if(int(a.c)!=int(b.c))return int(a.c)<int(b.c);
}
int main()
{
	int len,i;
	cin>>in;
	len=in.length();
	for(i=0;i<len;i++)
	{
		c[i].c=in[i];
	}
	sort(c,c+len,cmp);
	for(i=0;i<len;i++)cout<<c[i].c;
}
