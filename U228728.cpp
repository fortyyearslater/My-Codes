#include <bits/stdc++.h>
using namespace std;
int m,svol,h,l,flag,q,a,b;
void check(int step,int vol)
{
	if(vol>=h&&vol<=l){flag=true;return;}
	if(step==m+1)return;
	check(step+1,vol+a);
	check(step+1,vol-b);
}
int main()
{
	std::ios::sync_with_stdio(false);
	cin>>q>>a>>b;
	for(int i=1;i<=q;i++)
	{
		flag=false;
		cin>>svol>>h>>l>>m;
		check(1,svol);
		if(flag)cout<<"Yes"<<endl;
		else cout<<"No"<<endl;
	}
	return 0;
}
