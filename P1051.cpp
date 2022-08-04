#include <bits/stdc++.h>
using namespace std;
int n,i,total;
char temp;
struct student
{
	int order;
	string name;
	int a,b;//a:ÆÚÄ©,b:°à¼¶ 
	int IsCadre,IsWestern;
	int paper;
	int sum;
}a[101];
void sum(student &x,int &total)
{
	if(x.a>80&&x.paper>=1)x.sum=x.sum+8000;
	if(x.a>85&&x.b>80)x.sum=x.sum+4000;
	if(x.a>90)x.sum=x.sum+2000;
	if(x.a>85&&x.IsWestern==1)x.sum=x.sum+1000;
	if(x.b>80&&x.IsCadre==1)x.sum=x.sum+850;
	total=total+x.sum;
	//cout<<"--------"<<endl<<"name:"<<x.name<<endl<<"sum:"<<x.sum<<endl<<"total:"<<total<<endl;
}


bool cmp(student X,student Y)
{
	if(X.sum!=Y.sum)return X.sum>Y.sum;
	return X.order<Y.order;
}
int main()
{
	//freopen("P1051.out","w",stdout);
	cin>>n;
	for(i=1;i<=n;i++)
	{
		a[i].order=i;
		cin>>a[i].name>>a[i].a>>a[i].b;
		cin>>temp;
		if(temp=='Y')a[i].IsCadre=1;
		cin>>temp;
		if(temp=='Y')a[i].IsWestern=1;
		cin>>a[i].paper;
	}
	for(i=1;i<=n;i++)sum(a[i],total);
	//cout<<"--------"<<endl;
	sort(a+1,a+n+1,cmp);
	cout<<a[1].name<<endl<<a[1].sum<<endl<<total;
	return 0;
}
