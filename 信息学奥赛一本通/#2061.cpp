#include <bits/stdc++.h>
using namespace std;
double getS(double a,double b,double h)
{
	return (a+b)*h/2;
}
int main()
{
	printf("%.2lf",getS(15,25,10));
	return 0;
}
