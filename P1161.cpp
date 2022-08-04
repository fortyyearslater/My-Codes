#include <bits/stdc++.h>
using namespace std;
int light[2000001];
int n;//次数 
int i,p,q;//常用字符 
double a[5001];//小数(6位！6位！6位！...我给自己写注释写这么多干啥。。。) 
int t[5001];
double temp;//万用缓存233333 
int temp2;
int main()
{
	cin>>n;//n读进去
	for(i=1;i<=n;i++)cin>>a[i]>>t[i];//读a和t
	for(i=1;i<=n;i++)
	{
		for(p=1;p<=t[i];p++)
		{
			temp=p*a[i];
			if(light[int(temp)]==0)light[int(temp)]=1; 
			if(light[int(temp)]==1)light[int(temp)]=0; 
		}	
	} 
	for(i=1;i<=2000001;i++)if(light[i]==1)cout<<i;
	return 0;
}
