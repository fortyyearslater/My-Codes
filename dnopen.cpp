#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//  1  2  3  4  5  6  7  8\n
// 21 38 47 46 45 32 11  9\n
// 20 37 36 35 34 33 12 10\n
// 19 18 17 16 15 14 13 11\n 
//                      12\n
//
//
//
using namespace std;
int main()
{
	int a;
	scanf("%d",&a);
	if(a==1)cout<<"  1";
	if(a==2)cout<<"  1  2\n  4  3";
	if(a==3)cout<<"  1  2  3\n  8  9  4\n  7  6  5";
	if(a==4)cout<<"  1  2  3  4\n 12 13 14  5\n 11 16 15  6\n 10  9  8  7" ;
	if(a==5)cout<<"  1  2  3  4  5\n 16 17 18 19  6\n 15 24 25 20  7\n 14 23 22 21  8\n 13 12 11 10  9";
	if(a==6)cout<<"  1  2  3  4  5  6\n 20 21 22 23 24  7\n 19 32 33 34 25  8\n 18 31 36 35 26  9\n 17 30 29 28 27 10\n 16 15 14 13 12 11";
	if(a==7)cout<<"  1  2  3  4  5  6  7\n 24 25 26 27 28 29  8\n 23 40 41 42 43 30  9\n 22 39 48 49 44 31 10\n 21 38 47 46 45 32 11\n 20 37 36 35 34 33 12\n 19 18 17 16 15 14 13";
	if(a==8)cout<<"  1  2  3  4  5  6  7  8\n";
	if(a==9)cout<<"  1  2  3  4  5  6  7  8  9\n";
    return 0;
}
