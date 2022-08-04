#include <bits/stdc++.h>
using namespace std;
int main()
{
	int i;
	string res;
	const string fin="P1609.in";
	const string fout="P1609.out";
	const string jout="P1609_judge.out";
	
	for(i=1;i<=10000;i++)
	{
		freopen("P1609.in","w+",stdout);
		cout<<i;
		system("P1609_gen2.exe");
		freopen("P1609.out","r+",stdin);
		cin>>res;
		freopen("P1609_judge.out","w+",stdout);
		cout<<res<<" ";
	}
	return 0;
}
