#include <bits/stdc++.h>
using namespace std;
void f(string t)
{
	freopen(t.c_str(),"w",stdout);
}
int n,d,m[100000000],i,p,q;
int main()
{
		string temp;
		string temp2;
		long long sum=1;
		cin>>temp>>temp2;
		f(temp);
		cin>>n>>d;
		for(p=1;p<=d;p++)
		{
			for(q=1;q<=n;q++)cin>>m[(p-1)*2+q];	
		}
		cout<<n<<" "<<d<<"\n";
		for(p=1;p<=d;p++)
		{
			for(q=1;q<=n;q++)cout<<m[(p-1)*2+q]<<"\n";
		}
		f(temp2);
		sort(m+1,m+1+d*n);
		for(p=1;p<=3;p++)sum=sum*m[p];
		cout<<sum%804;
		return 0;
}
