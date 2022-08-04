#include <bits/stdc++.h>
using namespace std;
long long IsEnemy(long long p[4],long long j[4])
{
    if(abs(p[1]-j[1])<5)
    {
        if(abs(p[2]-j[2])<5)
        {
            if(abs(p[3]-j[3]<5))
			{
				if(abs((p[1]+p[2]+p[3])-(j[1]+j[2]+j[3]))<10)return 1;
			}
        }
    }
    return 0;
}
long long i,n,p,q,sum;
int main()
{
    long long a[1001][4];
    cin>>n;
    for(i=1;i<=n;i++)
    {
        for(p=1;p<=3;p++)cin>>a[i][p];
    }
for(i=1;i<n;i++)
{
    for(p=i+1;p<=n;p++)if(IsEnemy(a[i],a[p])==1)sum++;
}
cout<<sum;
return 0;
}
