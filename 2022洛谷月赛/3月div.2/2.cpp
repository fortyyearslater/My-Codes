#include <bits/stdc++.h>
using namespace std;
long long a,b,c,n,sum;
int main()
{
	cin>>n>>a>>b>>c;
	if(c>=n)sum=min(b-a+1,c-n+1);
	cout<<(n*2)-1+sum;
} 
