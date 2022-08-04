#include <bits/stdc++.h>
using namespace std;
long long get(unsigned long long in)
{
	if(in%2==0)return in/2;
	return (in-1)/2;
}
long long L,R;
int main()
{
	cin>>L>>R;
	cout<<get(R);
	return 0;
}
