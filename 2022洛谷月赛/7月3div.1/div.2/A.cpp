#include <bits/stdc++.h>
using namespace std;
struct node
{
    int x,y;
}table[114514];
bool isnear(node x,node y)
{
    if(abs(x.x-y.x)<=1&&abs(x.y-y.y)<=1)return false;
    else return true;
}
double dis(node x,node y)
{
    return sqrtl(pow(x.x-y.x,2)+pow(x.y-y.y,2));
}
int n,i,p,q;
int main()
{
	cin>>n;
	for(i=1;i<=n;i++)cin>>table[i].x>>table[i].y;
	for(i=1;i<n;i++)cout<<i<<","<<i+1<<":"<<dis(table[i],table[i+1])<<endl;
	return 0;
}
