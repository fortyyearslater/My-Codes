#include <bits/stdc++.h>
using namespace std;
int n;
int i,a,b,rcode;
int code[8];
int number[8];
int prize[8];
int main()
{
	cin>>n;
	for(i=1;i<=7;i++)
	{
		cin>>code[i];
	}
	for(a=1;a<=n;a++)
	{
		rcode=0;
		for(b=1;b<=7;b++)
		{
			cin>>number[b];
			if(number[b]==code[1]||number[b]==code[2]||number[b]==code[3]||number[b]==code[4]||number[b]==code[5]||number[b]==code[6]||number[b]==code[7])rcode++;
		}
		if(rcode>=1)prize[rcode]++;
	}
	for(i=7;i>=1;i--)
	{
		cout<<prize[i]<<" ";
	}
	return 0;
}
