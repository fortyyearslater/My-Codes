#include <bits/stdc++.h>
using namespace std;
int light[2000001];
int n;//���� 
int i,p,q;//�����ַ� 
double a[5001];//С��(6λ��6λ��6λ��...�Ҹ��Լ�дע��д��ô���ɶ������) 
int t[5001];
double temp;//���û���233333 
int temp2;
int main()
{
	cin>>n;//n����ȥ
	for(i=1;i<=n;i++)cin>>a[i]>>t[i];//��a��t
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
