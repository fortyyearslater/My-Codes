#include<bits/stdc++.h>
using namespace std;
int len,i,f;
char* s,k;
int main()
{
    cin>>s;
    len=strlen(s)-1;
    while(s[i++]=='9')if(i==len+1){for(s[0]='1',len++;i>0;i--)s[i]='0';}
    for(i=0;i<=len-i;i++)k[i]=k[len-i]=s[i];
    if(strcmp(k,s)<=0)
	{
        while(k[--i]=='9');
		k[i]=k[len-i]=++k[i];
        for(i++;i<=len-i;i++)k[i]=k[len-i]='0';
    }
	cout<<k;
    return 0;
}
