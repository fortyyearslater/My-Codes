#include <bits/stdc++.h>
using namespace std;

char tp;
stack<long long>a;
stack<long long>b;
char o = '0';
long long length = 0;
long long flag = 0;
int i;
int main() 
{
    while(scanf("%c", &tp))
    {
        i++;
		if (tp=='.'||tp=='/'||tp=='%')o=tp;
		else if (tp>='0'&&tp<='9'&&o!='0')
			b.push(tp - '0');
		else if (tp>='0'&&tp<='9'&&o=='0')
			a.push(tp-'0');
		else if (tp=='\n')
		{
			if (o=='0')length=i-1;
		    break;
		}
	}
	int x=length;
	if (o=='0')
	{
		for (int i=1;i<=x; i++)
		{
			flag = 0;
			if (a.size() != 1 && a.top() == 0) {
				a.pop();
				length--;
				flag++;
			}
			if (flag == 0)
				break;
		}
		for (int i = 1; i <= length; i++) {
			printf("%lld", a.top());
			a.pop();
		}
		return 0;
	}
	if (o != '0') {
		char l = o;
		if (l == '.' || l == '/') {
			int length1 = a.size();
			int length2 = b.size();
			int x1 = length1;
			for (int i = 1; i <= x1; i++) {
				flag = 0;
				if (a.size() != 1 && a.top() == 0) {
					a.pop();
					length1--;
					flag++;
				}
				if (flag == 0)
					break;
			}
			for (int i = 1; i <= length1; i++) {
				printf("%lld", a.top());
				a.pop();
			}
			printf("%c", l);
			int x2 = length2;
			for (int i = 1; i <= x2; i++) {
				flag = 0;
				if (b.size() == 1 && b.top() == 0) {
					cout << 0;
					return 0;
				} else if (b.size() != 1 && b.top() == 0) {
					b.pop();
					length2--;
					flag++;
				}
				if (flag == 0)
					break;
			}
			for (int i = 1; i <= length2; i++) {
				if (b.size() == 1 && b.top() == 0)
					break;
				printf("%lld", b.top());
				b.pop();
			}
			return 0;
		}
		if (l == '%') {
			int length = a.size();
			int x = length;

			for (int i = 1; i <= x; i++) {
				flag = 0;
				if (a.size() != 1 && a.top() == 0) {
					a.pop();
					length--;
					flag++;
				}
				if (flag == 0)
					break;
			}
			for (int i = 1; i <=length; i++) {
				printf("%lld", a.top());
				a.pop();
			}
			printf("%c", l);
			return 0;
		}
	}
	return 0;
}
