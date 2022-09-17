#include <bits/stdc++.h>
using namespace std;
struct node
{
	int code,facing;
	string name;
}person[100001];
long long m,n,i;
int main()
{
	std::ios::sync_with_stdio(false);
	cin>>n>>m;
	for(i=1;i<=m;i++)person[i].code=i,cin>>person[i].facing>>person[i].name;
	return 0;
}
