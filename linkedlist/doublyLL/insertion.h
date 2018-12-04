#include<stdio.h>
#include<stdlib.h>


typedef struct node
{
	struct node *next;
	struct node *prev;
	int data;
}Node;


Node *create(int val)
{
	Node *nn;
	nn=(Node *)malloc(sizeof(Node));
	nn->next=NULL;
	nn->prev=NULL;
	nn->data=val;
	return nn;
}

Node *insert_first(Node *head,int val)
{
	Node *temp=head;
	Node *nn;
	if(head==NULL)
		return create(val);
	else
	{
		nn=(Node *)malloc(sizeof(Node));
		nn->next=temp;
		nn->data=val;
		head=nn;
	}
	return head;
}

Node *insert_last(Node *head,int val)
{
	Node *temp=head;
	Node *nn;
	if(head==NULL)
		return create(val);
	else
	{
	while(temp->next!=NULL)
		temp=temp->next;
	nn=(Node *)malloc(sizeof(Node));
	nn->next=NULL;
	nn->prev=temp;
	temp->next=nn;
	nn->data=val;
	}
	return head;
}
	
Node *insert_at_pos(Node *head,int val,int pos)
{
	Node *temp=head;
	Node *nn;
	Node *temp1=temp->next;
	if(head==NULL)
		return create(val);
	else if(pos==0)
		return insert_first(head,val);
	else if(pos==length(head))
		return insert_last(head,val);
	else
	{
		for(int i=0;i<pos-1;i++)
		{
			temp=temp->next;
			temp1=temp1->next;
		}
		nn=(Node *)malloc(sizeof(Node));
		nn->data=val;
		nn->prev=temp;
		temp->next=nn;
		nn->next=temp1;
		temp->prev=nn;
	}
	return head;
}



Node *insert_in_sorted_LL(Node *head,int val)
{
	Node *temp=head;
	Node *temp1=temp->next;
	Node *nn;
	while(temp1->next!=NULL)
	{
		if(temp->data<val && temp1->data>val)
		{
			nn=(Node *)malloc(sizeof(Node));
			temp->next=nn;
			nn->prev=temp;
			temp1->prev=nn;
			nn->next=temp1;
			nn->data=val;
		}
		temp=temp->next;
		temp1=temp1->next;
	}
	return head;
}	
	

	
