#include <bits/stdc++.h>
using namespace std;
int cnt,i,n,t;
string str;
int main()
{
	cin>>t;
	cin>>str;
	n=str.length();
	for(i=0;i<n;i++)if(str[i]=='V'&&str[i+1]=='K'){str[i]=str[i+1]='0';cnt++;}
	for(i=0;i<n;i++)if(str[i]==str[i+1]&&str[i]!='0'){cnt++;break;}
	cout<<cnt;
	return 0;
}
