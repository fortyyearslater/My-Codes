#include <bits/stdc++.h>
#include <cstring>
using namespace std;
int main()
{
	string a1,b1;
	char t1[7],t2[7];
	int ans1=1,ans2=1;
	cin>>a1;
	cin>>b1;
	for(int i=0;i<=a1.length()-1;i++)
	{
	t1[i]=a1[i]-'A'+1;	
	}
	for(int i=0;i<=b1.length()-1;i++)
	{
	t2[i]=b1[i]-'A'+1;	
	}
	for(int i=0;i<=a1.length()-1;i++)
	{
	ans1=ans1*t1[i];
	}
	for(int i=0;i<=b1.length()-1;i++)
	{
	ans2=ans2*t2[i];
	}
	ans1=ans1%47;
	ans2=ans2%47;
	if(ans1==ans2)
	{
	printf("GO");	
	}
	else printf("STAY");
    return 0;
}
