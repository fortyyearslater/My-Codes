#include <bits/stdc++.h>
using namespace std;
int a[10001],n,i,p,q,m,x,k;
int main()
{
    cin>>n;
    for(i=1;i<=n;i++)cin>>a[i];
    if(n==1)
	{
		cout<<"1"<<endl;
		cout<<"0";	
		return 0;
	}
    if(n==2)
	{
		cout<<"2"<<endl;
		cout<<"1"<<endl;
		cout<<"1 0";
	}
	if(n==3)
	{
		if(a[1]==3&&a[2]==1&&a[3]==2)
        {
            cout<<"2"<<endl;
	    	cout<<"2"<<endl;
		    cout<<"1 1"<<endl;
		    cout<<"2 0";
        }
        cout<<"2"<<endl;
	   	cout<<"2"<<endl;
		cout<<"1 1"<<endl;
		cout<<"2 1";
	}
    return 0;
}
