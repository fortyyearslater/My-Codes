/*#include <bits/stdc++.h>
using namespace std;
int n,sum,flag,cnt,i,p,q,length,place,pos;
string in,word,a,b;
void lower(string &init)
{
	for(i=0;i<init.length();i++)if(init[i]<='Z'&&init[i]>='A')init[i]=init[i]+32;init=' '+init+' ';
}
int main()
{
	getline(cin,word);
	getline(cin,in);
	lower(word);
//	b=' '+word+' ';
	lower(in);
	//a=' '+in+' ';
	place=in.find(word,pos);
	if(place>=in.length())flag=1;
	sum++;
	pos=place+1;	
	if(flag==1)
	{
		cout<<"-1";
		return 0;	
	}
	while(in.find(word,pos)<in.length())
	{
		sum++;	
		pos=in.find(word,pos)+1;
	}
	cout<<sum<<" "<<place;
	return 0;
}*/
#include <bits/stdc++.h>
using namespace std;int n,sum,flag,cnt,i,p,q,length,place,pos;string in,word,a,b;void lower(string &init){for(i=0;i<init.length();i++)if(init[i]<='Z'&&init[i]>='A')init[i]=init[i]+32;init=' '+init+' ';}int main(){getline(cin,word);getline(cin,in);lower(word);lower(in);place=in.find(word,pos);if(place>=in.length())flag=1;sum++;pos=place+1;if(flag==1){cout<<"-1";return 0;}while(in.find(word,pos)<in.length()){sum++;pos=in.find(word,pos)+1;}cout<<sum<<" "<<place;return 0;}
