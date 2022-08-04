#include <bits/stdc++.h> 
using namespace std;
int a,b,i,n;
string str[31];
bool cmp(string x,string y)
{
	if(x!=y)return x+y>y+x;
}
int main()
{
	cin>>n;
	for(i=1;i<=n;i++)cin>>str[i];
	sort(str+1,str+1+n,cmp);
	cout<<str[1];
	return 0;
}
