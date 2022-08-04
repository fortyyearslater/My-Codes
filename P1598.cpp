#include <bits/stdc++.h>
using namespace std;
void draw(int let[27],int maxh)
{
	int i,p,t;
	for(t=maxh;t>=1;t--)
	{
		for(i=1;i<=26;i++)
		{
			if(let[i]>=t)cout<<"* ";
			else cout<<"  ";
		}
		cout<<endl;
	}
	for(i=0;i<=25;i++)cout<<char(i+'A')<<" ";
}
string a[5];
int i,letter[27]={0},h,p;
int main()
{
	//freopen("P1598.out","w+",stdout);
	for(i=1;i<=4;i++)
	{
		getline(cin,a[i]);	
		for(p=0;p<=a[i].length();p++)
		{
			if(a[i][p]>='A'&&a[i][p]<='Z')
			{
				letter[int(a[i][p])-int('A')+1]++;	
			}
		}
	}
	for(i=1;i<=26;i++)h=max(h,letter[i]);
	draw(letter,h);
	return 0;
}
