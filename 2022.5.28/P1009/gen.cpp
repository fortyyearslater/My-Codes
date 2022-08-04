#include <bits/stdc++.h>
using namespace std;
int i,p;
string t;
char itoc(int in){return char(in+'0');}
int main()
{
	freopen("table.txt","w+",stdout);
	for(i=1;i<=4;i++)
	{
		for(p=0;p<=9;p++)
		{
			t+="\""; 
			t+=itoc(i);
			t+=itoc(p);
			t+="\",";
		}
	}
	cout<<t;
	return 0;
}
