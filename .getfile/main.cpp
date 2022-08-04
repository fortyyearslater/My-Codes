#include <bits/stdc++.h>
using namespace std;
int main()
{
	system("gettime.exe");
	system("makezip.exe");
	freopen("time.txt","r+",stdin);
	freopen("down_to.txt","w+",stdout);
	string t;
	cin>>t;
	string b_folder="F:\Server_Backups\";
	string fname="Server_Backup_"+t+".zip ";
	cout<<b_folder<<fname;
	return 0;
}
