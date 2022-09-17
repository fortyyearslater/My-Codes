#include <iostream>
using namespace std;
long long n,dp[1145],flag[1145];
void getprime(){for(int i=2;i<=500;i++)if(!flag[i])for(int j=2;i*j<=1000;j++)flag[i*j]=1;}
int main()
{
    getprime(),dp[0]=1;
    std::ios::sync_with_stdio(false),cin.tie(0),cout.tie(0);
	cin>>n;
	for(int i=2;i<=n;i++){if(!flag[i])for(int j=i;j<=n;j++)dp[j]+=dp[j-i];}
	cout<<dp[n]<<endl;;
	return 0;
}
