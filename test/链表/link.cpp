#include <bits/stdc++.h>
using namespace std;
struct list_node
{
	int val;
	list_node* nxt;
	list_node* pre;
	list_node(){
	pre=nxt=NULL;
	}
	list_node(int _val)
	{
		val=_val,pre=nxt=NULL;
	}
}*head,*tail,*now,*p;
int i,a,q,b,c,n,t,sum,temp;
int main()
{
	cin>>n;
	cin>>temp;
	head=tail=new list_node;
	tail->val=temp;
	for(i=1;i<n;i++)
	{
		cin>>temp;
		now=new list_node();
		now->val=temp;
		head->nxt=now;
		now->pre=head;
		head=now;
	}
	
	cin>>temp;
	now=tail;
	for(i=1;i<temp;i++)now=now->nxt;
	now->pre->nxt=now->nxt;
	now->nxt->pre=now->pre;
	now=tail;
	while(now!=NULL)
	{
		cout<<now->val<<" ";
		now=now->nxt;
	}	
	
	return 0;
}
