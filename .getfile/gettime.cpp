#include <bits/stdc++.h>
using namespace std;
int main() 
{ 
freopen("time.txt","w+",stdout);
struct tm *newtime; 
char tmpbuf[128]; 
string timebuf;
time_t lt1; 
time(&lt1); 
newtime=localtime(&lt1); 
strftime(tmpbuf, 128, "%Y_%m_%d", newtime); ///������ݸ�ʽ����ʾ
printf(tmpbuf); 
return 0;
} 
