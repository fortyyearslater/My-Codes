#include <bits/stdc++.h>
using namespace std;
int n,a=1,i;
int main()
{
    cin>>n;
    for(i=1;i<n;i++)
    {
        a=a+1;
        a=a*2;
    }
    cout<<a;
}
