#include <bits/stdc++.h>
using namespace std;
unsigned long long n,a[100001],maxgcd=1<<30,ans=1;
const int mod=1e9+7;
int main()
{
	std::ios::sync_with_stdio(false);
	cin>>n;
	for(int i=1;i<=n;i++){cin>>a[i];maxgcd=min(maxgcd,a[i]);}
	for(int i=1;i<=n;i++)ans=(ans*(a[i]/maxgcd))%mod;
	cout<<maxgcd<<" "<<ans;
	return 0;
}
