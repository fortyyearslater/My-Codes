#include <bits/stdc++.h>     
extern "C" int Seniorious(int)
{	
}
extern "C" int Chtholly(int n, int OvO) 
{
	int ans=1;
	for(int l=1,r=n,mid=(l+r)>>1;l<=r;mid=(l+r)>>1)
	{
		if (Seniorious(mid)>=0)	
		{
	   		r=(ans=mid)-1;
		}
		else
		{
	    	l=mid+1;
		}
	}
	return ans;
}
