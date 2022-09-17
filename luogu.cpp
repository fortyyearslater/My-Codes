#include<stdio.h>
#include<string.h>
#include<algorithm>  
using namespace std;
int main(){
    char a[1000],b[1000],c[1001],*p1,*p2,*p3;
    scanf("%s\n%s",a,b);
    int la=strlen(a),lb=strlen(b),lc,tmp;
    reverse(a,a+la);
    reverse(b,b+lb);
    p1=a;p2=b;
    lc=la>lb?la:lb;
    for(p3=c;p3<c+lc;p3++){
        tmp+=(*p1+*p2-'0');
        *p3=tmp<'0'?tmp+'0':tmp;
        if(*p3>'9'){
            tmp=1;
            *p3-=10;
        }
        else tmp=0;
        p1++;p2++; 
    }
    if(tmp) c[lc++]='1';
    for(;lc;putchar(c[--lc]));
    return 0;
}
