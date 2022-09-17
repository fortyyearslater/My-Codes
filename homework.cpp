#include <bits/stdc++.h>
#include "tool/ctoa.h"
using namespace std;
long long gj[100000000];
int main()
{
    string str;
    cin>>str;
    for(int i=0;i<str.length();i++)cout<<__ctoa(str[i])<<endl;
    return 0;
}
