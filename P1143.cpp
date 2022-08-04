#include <bits/stdc++.h>
using namespace std;
long long convert(string str,int base){return strtol(str.c_str(),NULL,base);}
string itos(long long in)
{
	string t,o;
	int i;
	while(in>0){t+=(in%10)+'0';in/=10;}
	for(i=0;i<t.length();i++)o+=t[t.length()-i-1];
	return o;
}
long long ll;
int base[3];
string m,t;
int main()
{
	cin>>base[1]>>m>>base[2];
	ll=convert(m,base[1]);
	cout<<itos(ll);
//	cout<<convert(t,base[2]);
//	cout<<convert(itos(convert(m,base[1])),base[2]);
	return 0;
}
