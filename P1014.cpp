#include <bits/stdc++.h>
using namespace std;
int n,i,a,b,h,t,num=1,line,column;
int getline(int t)
{
	if(t==1)return 1;
	if(t==0)return 0;
	return getline(t-1)+t;
}
int main()
{
		cin>>n;
	while(t<n)
	{
		line++;
		t=getline(line);
	}
	column=n-getline(line-1);
	if(line%2==0)cout<<column<<"/"<<line+1-column;
	else cout<<line+1-column<<"/"<<column;
	return 0;
}
