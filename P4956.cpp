#include <bits/stdc++.h>
using namespace std;
int n,x,k,i,maxx=1,mink=1,p,q,d,md,w,sum;
int main()
{		
	md=52*7;
	cin>>n;
	n=n/md;
	for(i=1;i<=100;i++)
	{
		k=0;
		for(p=1;p<=100;p++)
		{
			if((p*3+i)==n)
			{
				k=p;
				break;	
			}
		}
		if(k==0)continue;
        maxx=i;
        mink=k;
	}
	cout<<maxx<<endl<<mink;
	return 0;
 } 
