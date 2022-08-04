#include <bits/stdc++.h>
using namespace std;
string s[53];
void get(string &in)
{
	char temp;
	string t;
	for(int i=1;i<=167;i++)
	{
		temp=getchar();
		t=temp;
		in.append(t);
	}
	getchar();
}
int main()
{
	freopen("kid.in","r",stdin);
	for(int i=1;i<=52;i++)get(s[i]);
	freopen("T222295-result.cpp","w",stdout);
	cout<<"#include <bits/stdc++.h>"<<endl;
	cout<<"using namespace std;"<<endl;
	cout<<"int main()"<<endl;
	cout<<"{"<<endl;
	for(int i=1;i<=52;i++)cout<<"	puts(\""<<s[i]<<"\");"<<endl;
	cout<<"return 0;"<<endl;
	cout<<"}"<<endl;
	return 0;
}
