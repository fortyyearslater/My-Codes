#include <bits/stdc++.h>
using namespace std;
string in;
int b,sum,i,n,t,cnt,maxn,minn,ans,len;
bool IsPrime(int in)
{
    for(int i=2;i<=sqrt(in);i++)
    {
        if(in%i==0)return false;
    }
    return true;
}
struct letter
{
	int l,time;
}a[27],out[27];
bool cmp(letter A,letter B)
{
	if(A.time!=B.time)return A.time>B.time;
}
int main()
{
	for(i=1;i<=26;i++)
	{
		a[i].l='a'-1+i;
	}
	cin>>in;
	len=in.length();
	for(i=0;i<len;i++)
	{
	   a[in[i]-'a'].time++;
	}
	for(i=1;i<=26;i++)
	{
		if(a[i].time!=0)
		{
			cnt++;
			out[cnt].l=a[i].l;
			out[cnt].time=a[i].time;
		}
	}
	sort(out+1,out+1+cnt,cmp);					
	ans=out[1].time-out[cnt].time;
	if(ans==0||ans==1)
	{
		cout<<"No Answer"<<endl<<"0";
		return 0;
	}
	if(IsPrime(ans))
	{
		cout<<"Lucky Word"<<endl<<ans;
		return 0;
	}
	cout<<"No Answer"<<endl<<"0";
	return 0;
}
