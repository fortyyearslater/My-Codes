#include <bits/stdc++.h>
using namespace std;
int sum,a,n,i;
int main()
{
	while(cin>>a){i++;sum=sum+a;}
	n=pow(2,i-1);
	cout<<sum*n;
	return 0;	
}
