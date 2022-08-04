#include <bits/stdc++.h>
using namespace std;
int main()
{
	freopen("P5730.txt","r+",stdin);
	//freopen("P5730.table","w+",stdout);
	int i,p,q,cnt;
	string str[6];
	for(i=1;i<=5;i++)cin>>str[i];
	for(i=1;i<=5;i++)
	{
		for(p=1;p<=str[i].length();p++)
		{
			cout<<str[i][p-1];
		}
		cout<<endl;
	}
	
	return 0;
}
