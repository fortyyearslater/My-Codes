#include <stdio.h>
#include <windows.h>
#include <wininet.h>
#include "md5.h" 
#define MAXBLOCKSIZE 1024
#pragma comment( lib, "wininet.lib" ) ;

/*void download(const char *Url,const char *save_as)Urlָ��ĵ�ַ���ļ����ص�save_asָ��ı����ļ�
{
  byte Temp[MAXBLOCKSIZE];
   ULONG Number = 1;

   FILE *stream;
   HINTERNET hSession = InternetOpen((LPCWSTR)"RookIE/1.0", INTERNET_OPEN_TYPE_PRECONFIG, NULL, NULL, 0);
 if (hSession != NULL)
 {
  HINTERNET handle2 = InternetOpenUrl(hSession, (LPCWSTR)Url, NULL, 0, INTERNET_FLAG_DONT_CACHE, 0);
  if (handle2 != NULL)
  {

if( (stream = fopen( save_as, "wb" )) != NULL )
   {
    while (Number > 0)
    {
     InternetReadFile(handle2, Temp, MAXBLOCKSIZE - 1, &Number);

     fwrite(Temp, sizeof (char), Number , stream);
    }
    fclose( stream );
   }

   InternetCloseHandle(handle2);
   handle2 = NULL;
  }
  InternetCloseHandle(hSession);
  hSession = NULL;
 }
}*/
string md5,url;
char* in;
char* out;
int main(int argc, char* argv[]){
	cin>>in;
	md5=getmd5(in,out);
	cout<<md5;
//download(url.c_str,"C:\temp.temp");/*����ʾ�������ذٶȵ���ҳ��c:\index.html�ļ�*/
 return 0;
}
