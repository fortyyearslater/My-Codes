#include<iostream>
#include<cstring>
using namespace std;
int n,a[10001],b[10001],ans,i;
void init(int a[])
{ 
	string s;
  	cin>>n>>s;
  	memset(a,0,sizeof(a));
  	a[0]=s.length();
  	for(i=1;i<=a[0];i++)if(s[a[0]-i]>='0'&&s[a[0]-i]<='9')a[i]=s[a[0]-i]-'0';else a[i]=s[a[0]-i]-'A'+10;
}
bool check(int a[]){for(i=1;i<=a[0];i++)if(a[i]!=a[a[0]-i+1])return false;return true;}
void splus(int a[])
{
	for(int i=1;i<=a[0];i++)b[i]=a[a[0]-i+1];
	for(int i=1;i<=a[0];i++)a[i]+=b[i];
	for(int i=1;i<=a[0];i++)
	{
		a[i+1]+=a[i]/n;
		a[i]%=n;
	} 
	if(a[a[0]+1]>0)a[0]++;
}
int main()
{	
	init(a);
	if(check(a)){cout<<"STEP=0";return 0;}
	ans=0; 
	while(ans++<=30)
	{
		splus(a);
		if(check(a)){cout<<"STEP="<<ans;return 0;}
	}
	cout<<"Impossible!";
	return 0;
}

