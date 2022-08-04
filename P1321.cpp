#include <bits/stdc++.h>
using namespace std;
string in;
int cntb,cntg,i;
int main()
{
	cin>>in;
	for(i=0;i<in.length()-2;i++)if(in[i]=='b'||in[i+1]=='o'||in[i+2]=='y')cntb++;
	for(i=0;i<in.length()-3;i++)if(in[i]=='g'||in[i+1]=='i'||in[i+2]=='r'||in[i+3]=='l')cntg++;
	cout<<cntb<<endl<<cntg;
}
