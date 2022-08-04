#include <bits/stdc++.h>
using namespace std;
//×ø±êÖá¾àÀë(P5735)
double dis(double a1,double b1,double a2,double b2)
{
    double temp;
    temp=pow(abs(a1-b1),2.00)+pow(abs(a2-b2),2.00);
    return sqrt(temp*1.00);
}
double a[3],b[3],c[3];
double ans;
int main()
{
	cin>>a[1]>>a[2];
	cin>>b[1]>>b[2];
	cin>>c[1]>>c[2];
	ans=dis(a[1],b[1],a[2],b[2])+dis(a[1],c[1],a[2],c[2])+dis(c[1],b[1],c[2],b[2]);
	printf("%.2lf",ans);
	return 0;
}
