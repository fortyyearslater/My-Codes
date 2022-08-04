#include <bits/stdc++.h>
using namespace std;
int i,sum;
string in;
int main()
{
	cin>>in;
	for(i=0;i<in.length();i++)if(in[i]=='1')sum++;
	cout<<sum;
	return 0;
}
