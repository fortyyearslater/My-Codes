#include <bits/stdc++.h>
using namespace std;
long long t,s,x;
bool shout(long long t,long long s,long long x)
{
	long long m=t;
	while(m<=x)
	{
		if(m==x)return true;
		if(m+1==x&&m!=t)return true;
		m+=s;
	}
	return false;
}
int main()
{
	cin>>t>>s>>x;
	if(shout(t,s,x))cout<<"YES";
	else cout<<"NO";
	return 0;
}
