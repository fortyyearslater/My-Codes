#include <bits/stdc++.h>
using namespace std;
long long MakeGenius(long long k)
{
	int sum,i,t=0;
	for(i=1;i<=k;i++)
	{
		t=t+9*pow(10,i-1);
	}
	return t;
}
bool GetGenius(long long k,long long n)
{
	int i,t=MakeGenius(k);
	while(n>=0)
	{
		n=n-t;
		if(n==0)return true;
	}
	return false;
}
int k,n,i,t;
bool ans;
int main()
{
	cin>>t;
	for(i=1;i<=t;i++)
	{
		cin>>k>>n;	
		ans=GetGenius(k,n);
		if(ans==true)cout<<"aya"<<endl;
		if(ans==false)cout<<"baka"<<endl;
	}
	return 0;
}
