#include <bits/stdc++.h>
using namespace std;
int wend;
int i;
string word;
int main()
{
	cin>>word;
	wend=word.length()-1;
	if((word[wend-2]=='i')&&(word[wend-1]=='n')&&(word[wend]=='g'))
	{
		for(i=0;i<=wend-3;i++)cout<<word[i];
	}
	else if(((word[wend-1]=='e')&&(word[wend]=='r'))||((word[wend-1]=='l')&&(word[wend]=='y')))
	{
		for(i=0;i<=wend-2;i++)cout<<word[i];
	}
	else cout<<word;
	return 0;
}

