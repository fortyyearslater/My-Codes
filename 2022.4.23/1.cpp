#include <bits/stdc++.h>
using namespace std;
char* in;
int sum,i;
int main()
{

	cin>>in;
	for(i=1;i<strlen(in);i++)
	{
		if(in[i]==' ')sum++;
		cout<<in[i]<<endl;
	} 
	cout<<sum;
	return 0;
}
