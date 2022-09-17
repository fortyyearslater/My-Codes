#include <bits/stdc++.h>
using namespace std;
double a,b,c,d,sum;
int main()
{
	cin>>a>>b>>c>>d;
	for(double x=-100.00;x<=100.00;x+=0.001)
	{
		double l=x,r=x+0.001;
		const double x1=a*l*l*l+b*l*l+c*l+d,x2=a*r*r*r+b*r*r+c*r+d;
		if(x1*x2<0)
		{
			printf("%.2lf ",l);
			sum++;
			if(sum==3)break;
		}
	}
	return 0;
}
