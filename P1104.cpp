#include <bits/stdc++.h>
using namespace std;
struct student
{
    int order;
    string s;
    int y,m,d;
}a[101];
bool cmp(student X,student Y)
{
    if(X.y!=Y.y)return X.y<Y.y;
    if(X.m!=Y.m)return X.m<Y.m;
    if(X.d!=Y.d)return X.d<Y.d;
    return X.order>Y.order;
}
int n,i;
int main()
{
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>> a[i].s >> a[i].y >> a[i].m >> a[i].d;
        a[i].order=i;
    }
    sort(a+1,a+n+1,cmp);
    for(i=1;i<=n;i++)cout<<a[i].s<<endl;
    return 0;
}
