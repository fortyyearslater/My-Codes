#include <bits/stdc++.h>
using namespace std;
int num[101],flag[101],n,ans;
int main()
{
	cin>>n;
	for(int i=1;i<=n;i++)cin>>num[i];
	for(int i=1;i<n;i++)
		for(int j=i+1;j<=n;j++)
			for(int p=1;p<=n;p++)
				if(num[i]+num[j]==num[p]&&!flag[p])ans++,flag[p]=true;
	cout<<ans;
}
