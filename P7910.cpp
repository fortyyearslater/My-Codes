#include <bits/stdc++.h>
using namespace std;
struct numb
{
    int data;
    int order;
}num[8000001],num2[8000001];
long long n;
bool cmp(numb x,numb y)
{
    if(x.data!=y.data)return x.data<y.data;
    else return x.order<y.order;
}
void reset()
{
    for(int i=1;i<=n;i++)
    {
        num2[i].data = num[i].data;
        num2[i].order = num[i].order;
    }
}
long long opr[4],q,i,p,opt;
int main()
{
 //   freopen("P7910.in","r+",stdin);
 //   freopen("P7910.out","w+",stdout);
    cin>>n>>q;
    for(i=1;i<=n;i++)
    {
        cin>>num[n].data;
        num[i].order=i;
    }
    for(i=1;i<=q;i++)
    {
        cin>>opt;
        if(opt==1)
        {
            cin>>opr[1]>>opr[2];
            num[opr[1]].data=opr[2];
        }
        else if(opt==2)
        {
            cin>>opr[0];
            reset();
            sort(num2+1,num2+1+n,cmp);
            for(i=1;i<=n;i++)if(num2[i].order==opr[0])cout<<i;
        }
    }
   return 0;
}
