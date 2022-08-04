#include <bits/stdc++.h>
using namespace std;
string numbers[29]={"zero","one","two","three","four","five","six","seven","eight","nine"," ten "," eleven "," twelve "," thirteen "," fourteen "," fifteen "," sixteen "," seventeen "," eighteen "," nineteen "," twenty "," a "," both "," another "," first "," second "," third "};
int i,a,b,c,p,sum;
string word,in;
int nums[8];
bool flag,first=true;
int number[29]={0,1,4,9,16,25,36,49,64,81,0,21,44,69,96,25,56,89,24,61,0,1,4,1,1,4,9};
void detect(int pos,string in){for(p=0;p<=26;p++){if(in.find(numbers[p])==pos){flag=true;nums[sum]=number[p];sum++;}}}
int main()
{
//	getline(cin,in);
//	in=" "+in+" ";
	for(i=1;i<=6;i++)
	{
		cin>>word;
		detect(0,word);
	}
//	for(i=1;i<in.length();i++)detect(i,in);
	sort(nums,nums+sum+1);
	if(flag==false){cout<<"0";return 0;}
	if(nums[1]!=0){if(nums[1]<10&&first==false)cout<<"0";cout<<nums[1];first=false;}
	for(i=2;i<=sum;i++){if(nums[i]<10&&first==false)cout<<"0";cout<<nums[i];first=false;}
    return 0;
}