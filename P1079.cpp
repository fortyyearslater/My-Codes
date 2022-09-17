#include <bits/stdc++.h>
using namespace std;
string code,text,cnt;
void decode(){for(int i=0;i<text.length();i++){int t=(code[i%code.length()]&31)-1;text[i]=(text[i]&31)-t>0?text[i]-t:text[i]-t+26;}return;}
int main(){cin>>code>>text;decode();cout<<text;return 0; }
