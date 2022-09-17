#include <bits/stdc++.h>
using namespace std;
int n,sum;
int main()
{
	freopen("title.in","r+",stdin);
	freopen("title.out","w+",stdout);
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		getchar();
		string str;
		bool flag=0;
		getline(cin,str);
		for(int j=0;j<str.length();j++)
		{
			if(str[j]!='#'&&str[j]!=' ')break;
			if(str[j]=='#'&&str[j+1]==' ')
			{
				sum++;
				break;
			}
		}
		
	}
	cout<<sum;
	return 0;
}
