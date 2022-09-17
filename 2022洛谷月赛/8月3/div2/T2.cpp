#include <bits/stdc++.h>
using namespace std;
int cnt,n,m,num[10000001],t;
void get(int x,int l,int r,int w,int step)
{
	if(l==r){cnt=min(cnt,step-1);return;} 
	int mid=(l+r+w)/2;
	if(num[mid]-w<x){get(x,mid+!w,r,0,step+1);get(x,mid+!w,r,1,step+1);} 
	else {get(x,l,mid-w,0,step+1);get(x,l,mid-w,1,step+1);}
}
int main()
{
	std::ios::sync_with_stdio(false);
	cin>>n;
	for(int i=1;i<=n;i++)cin>>num[i];
	cin>>m;
	for(int i=1;i<=m;i++){cin>>t;cnt=114514;get(t,1,n,1,1),get(t,1,n,0,1);cout<<cnt<<endl;}
	return 0;
}
