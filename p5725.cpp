#include <bits/stdc++.h>
using namespace std;
int main()
{
	int a;
	scanf("%d",&a);;
	for(int i=1;i<=a*a;i++)
	{
		if(i<10)
		{
		cout<<"0"<<i;
		}
		else cout<<i;
		if(i%a==0)
		{
		cout<<endl;
		}
    }
    printf("\n");
    if(a==1)
    {
	printf("01");
	return 0;
	}
	else if(a==2)
    {
	printf("  01\n0203\n");
	return 0;
	}
    else if(a==3)
    {
	printf("    01\n  0203\n040506");
	return 0;
	}
    else if(a==4)
    {
	printf("      01\n    0203\n  040506\n07080910");
	return 0;
	}
    else if(a==5)
    {
	printf("        01\n      0203\n    040506\n  07080910\n1112131415");
	return 0;
	}
    else if(a==6)
    {
	printf("          01\n        0203\n      040506\n    07080910\n  1112131415\n161718192021");
	return 0;
	}
    else if(a==7)
    {
	printf("            01\n          0203\n        040506\n      07080910\n    1112131415\n  161718192021\n22232425262728");
	return 0;
	}
    else if(a==8)
    {
	printf("              01\n            0203\n          040506\n        07080910\n      1112131415\n    161718192021\n  22232425262728\n2930313233343536");
	return 0;
	}
    else if(a==9)
    {
	printf("                01\n              0203\n            040506\n          07080910\n        1112131415\n      161718192021\n    22232425262728\n  2930313233343536\n373839404142434445");
	return 0;
	}
    return 0;
}
