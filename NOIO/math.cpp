#pragma GCC optimize(1)
#pragma GCC optimize(2)
#pragma GCC optimize(3,"Ofast","inline")
#include <bits/stdc++.h>
using namespace std;
long long v,z,x,t,i,y;
/*long long gcd(long long a,long long b)
{
   if(b==0)return a;
    else return gcd(b,a%b);
}*/
int main()
{
	freopen("math3.in","r",stdin);
	cin>>t;
	for(i=1;i<=t;i++)
	{
		cin>>x>>z;
   	    v=z/x;
   	    y=v/sqrt(__gcd(v,x*x));
		  cout<<y<<endl;	
	}
    return 0;
}
