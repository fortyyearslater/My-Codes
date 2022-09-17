#include<iostream>
#include<cstring>
using namespace std;
long q,a,b,f,h,l,m,sum;
void control()
{
	for(int i=1;i<=m+1;i++)
	{
		if(f<l)f+=a;
		else
		{
			if(f>h) f-=b;
			else
			{
				cout<<"Yes"<<endl;
				return;
			}
		}
	}
	cout<<"No"<<endl;
	return;
}
int main()
{
	cin>>q>>a>>b;
	for(int i=1;i<=q;i++)
	{
		cin>>f>>l>>h>>m;
		control();
	}
	return 0;
}

