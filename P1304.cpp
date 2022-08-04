#include <bits/stdc++.h>
using namespace std;
bool IsPrime(int in)
{
	if(in==1)return false; 
    if(in==2)return true;
    for(int i=2;i<=sqrt(in);i++)
    {
        if(in%i==0)return false;
    }
    return true;
}
int a,temp,i,p,b,in;
struct num
{
    int a,b;
}n[10001];
int main()
{
    cin>>in;
    for(i=4;i<=in;i=i+2)
    {
    	n[i].a=i;
        for(a=2;a<i;a++)
        {
            if(IsPrime(a))
            {
                if(IsPrime(i-a))
                {
                    if(a<n[i].a)
                    {
                        n[i].a=a;
                        n[i].b=i-a;
                    }
                }
            }
        }
        cout<<"<<\""<<i<<"="<<n[i].a<<"+"<<n[i].b<<"\\n\"";
    }
    cout<<";";
    return 0;
}
