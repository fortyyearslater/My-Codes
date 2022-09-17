#include <bits/stdc++.h>
using namespace std;
unsigned long long cnt=114514,n,m,seq[2000000],t,gen,sigma;
void get(unsigned long long *num,unsigned long long x,unsigned long long l,unsigned long long r,unsigned long long w,unsigned long long step)
{
	if(l==r)
	{
		cnt=min(cnt,step-1);
		return;
	} 
	int mid=(l+r+w)/2;
	if(num[mid]-w<x)
	{
		get(num,x,mid+!w,r,0,step+1);
		get(num,x,mid+!w,r,1,step+1);
	} 
	else 
	{
		get(num,x,l,mid-w,0,step+1);
		get(num,x,l,mid-w,1,step+1);
	}
}
int main()
{
	std::ios::sync_with_stdio(false);
	cin>>n;
	for(int i=1;i<=n;i++)seq[i]=i-1;
	cin>>m>>gen;
	for(int i=1;i<=m;i++)
	{
		cin>>t;
		cnt=114514;
		get(seq,t,1,n,1,1);
		get(seq,t,1,n,0,1);
		sigma+=cnt*i;
	}
	cout<<sigma;
	return 0;
}
