#include <bits/stdc++.h>
using namespace std;
#define null __null
struct node
{
    int data,num;
    struct node *next,*last;
};
struct node *p;
struct node *q;
struct node *t;
struct node head[2e5+10],fruit[2e5+10];
void eat(int pos)
{
	int next=fruit[pos].next,last=fruit[pos].last;
	fruit[last].next=next;
	fruit[next].last=last;
}
int n,i,sum;
int main()
{
    cin>>n;
    for(i=1;i<=n;i++)
    {
        p=(struct node *)malloc(sizeof(struct node));
        cin>>p->data;
        p->num=i;
        if(head==null)
		{
			head=p;
			p->last=null;
		}
        else
		{
			q->next=p;
			p->last=q;
		}
        q=p;
    }
    p->next=null;
    t=head;
    while(t!=null)
    {
        cout<<t->data<<" ";
        t=t->next;
    }
    while(head!=null)
    {
    	t=head;
    	while(t!=null)
    	{
    		if(t->data!=t->next->data)
			{
				cout<<t->num;
				if(head==t)head=t->next;
				else t->next=t->next->next;
				break;	
			}
    		t=t->next;
		}
	}
    
    return 0;
}
