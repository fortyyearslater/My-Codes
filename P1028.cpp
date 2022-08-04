#include <bits/stdc++.h>
using namespace std;
int n,j,i,f[1001];
int main()
{
	cin>>n;
	for(i=1;i<=n;i++){for(j=1;j<=i/2;j++)f[i]+=f[j];f[i]++;}
	cout<<f[n];
	return 0;
}
