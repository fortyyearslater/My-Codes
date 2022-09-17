#include <bits/stdc++.h>
using namespace std;
long long n,ord[10000001],a[100001];
long long opr[4],q,p,opt;
inline void reset()
{
	for(int i=1;i<=n;i++)
		for(int j=i;j>=2;j--)
			if(a[j]<a[j-1])swap(ord[j],ord[j-1]);
}

int main()
{
 //   freopen("P7910.in","r+",stdin);
 //   freopen("P7910.out","w+",stdout);
    cin>>n>>q;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
        ord[i]=i;
    }
    for(int i=1;i<=q;i++)
    {
        cin>>opt;
        if(opt==1)
        {
            cin>>opr[1]>>opr[2];
            a[ord[opr[1]]]=opr[2];
        }
        else if(opt==2)
        {
            cin>>opr[0];
            reset();
            for(int j=1;j<=n;j++)if(ord[j]==opr[0])cout<<j<<endl;
        }
    }
   return 0;
}
