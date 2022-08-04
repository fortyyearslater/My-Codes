#include<bitsdc++.h>
using namespace std;
int n,a[200050];
int b[200050],l[200050],r[200050];
int cnt;
int main(void)
{
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
		if(i==1||a[i]!=a[i-1])//如果是第一个数或者与前一个数不同，就说明是一个新块。
		{
			cnt++;
			b[cnt]=i;
		}//记录新块的头一个数据，组成果篮时可以直接输出。
		l[i]=i-1;
		r[i]=i+1;//新建每一个数的链表指针，用数组存储。
	}
	l[0]=1,r[n+1]=n;
	a[0]=a[n+1]=-1;
	//建立边界（虽然好像并没有什么作用。
	//循环找出果篮
	while(r[0]!=n+1)//如果链表中间的数都被跳过，说明所有的水果都被用完了，退出循环。
	{
		int cnt1=0;
		int c[200050];
		for(int u=1;u<=cnt;u++)
		{
			cout<<b[u]<<" ";//输出储存过的组成果篮的数。
			int x=l[b[u]];
			int y=r[b[u]];
			r[x]=y;
			l[y]=x;
			//使用链表删除该数
			if(a[b[u]]==a[y]&&a[y]!=a[x])//先判断该数删除后能否产生新的一个块头数据。
            //如果当前数不同于后一个数，说明后一个数已经被录入，当前数被删除后，不会产生新的数据。
            //如果当前数与前一个数相同，则说明该数删除后不会产生新的数据，理由：
			{
				cnt1++;
				c[cnt1]=y;
			}
		}
		printf("\n");
		cnt=cnt1;
		for(int i=1;i<=cnt;i++)
		b[i]=c[i];
	}
	return 0;
}
