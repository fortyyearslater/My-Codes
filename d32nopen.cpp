#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n, i = 1, q = 1;
	long long s[51] = {1}, a[51] = {1}, ans = 0;
	scanf("%d", &n);
	for (i = 1; i <= n; i++) //��ѭ��s!
	{
		for (q = 1; q <= i; q++) //��ѭ��q!
		{
			s[i] = s[i] * q;
		}
		ans = ans * s[i];
	}
	printf("%lld", ans);
	return 0;
}
