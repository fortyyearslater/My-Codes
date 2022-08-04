#include <bits/stdc++.h>
using namespace std;
//笔记:ceil()向上取整
int s,v,i,p,q,t;
//计算并输出时间
void out(int T)
{
    int h=T/60,m=T%60;
    if(h<10)cout<<"0"<<h<<":";
else cout<<h<<":";
    if(m<10)cout<<"0"<<m;
else cout<<m;
}
int main()
{
    cin>>s>>v;
    t=ceil(s/v+10);
    out(t);
    return 0;
}