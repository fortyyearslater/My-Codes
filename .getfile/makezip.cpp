#include <bits/stdc++.h>
using namespace std;
int main()
{
	freopen("time.txt","r+",stdin);
	freopen("latest.txt","w+",stdout);
	string t;
	cin>>t;
	string execu="WinRAR A ";
	string b_folder="http://cloud.nat.yinidc.cn:26725/chfs/shared/Server_Backup/";
	string fname="Server_Backup_"+t+".zip ";
	cout<<b_folder<<fname;
	string folder="C:\\Users\\Administrator\\Desktop\\Minecraft_Servers\\1.18.1\\ICE_HOTEL";
	string command=execu+fname+folder;
	system(command.c_str());
}
