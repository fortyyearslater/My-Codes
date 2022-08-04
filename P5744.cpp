#include <bits/stdc++.h>
using namespace std;
int n,age[10001],score[10001];
string name[10001];
int i,p;
int main()
{
	cin>>n;
	for(i=1;i<=n;i++)
	{
		cin>>name[i];
		cin>>age[i]>>score[i];
	}
	for(i=1;i<=n;i++)
	{
		cout<<name[i]<<" ";
		cout<<age[i]+1<<" ";
		if(score[i]*1.2>=600)cout<<"600"<<endl;
		else cout<<score[i]*1.2<<endl;
	}
	return 0;
}
