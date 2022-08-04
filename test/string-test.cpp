#include <bits/stdc++.h>
using namespace std;
int sum;
int main()
{
	string in;
	char a[100001];
	cin>>in;
	int i;
	for(i=0;i<=in.length();i++)
	{
		a[i]=in[i];
		cout<<a[i]<<" ";
		sum++;
	}
	cout<<sum-1;
	return 0;
}

