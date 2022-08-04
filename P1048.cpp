#include <bits/stdc++.h>
using namespace std;
int T,M,n,i,psum,tsum,msum;
struct flower
{
	int t,prize;
}f[1001];
bool cmp(flower X,flower Y)
{
	if(X.prize!=Y.prize)return X.prize>Y.prize;
	return X.t<Y.t;
}
int main()
{
	cin>>T>>M;
	for(i=1;i<=M;i++)
	{
		cin>>f[i].t>>f[i].prize;
	}
	for(i=1;i<=M;i++)
	{
		tsum=0;
		psum=0;
		for(n=1;n<=i&&tsum<=T;n++)
		{
			tsum=f[n].t+tsum;
			psum=f[n].prize+psum;
			if(tsum>T)psum=psum-f[n].prize;
		}
		msum=max(msum,psum);
	}
	cout<<msum;
	return 0;
}
