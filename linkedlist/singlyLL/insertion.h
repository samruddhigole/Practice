#include<stdio.h>
#include<stdlib.h>


typedef struct node
{
	struct node *next;
	int data;
}Node;


void display(Node *head)
{
	Node *temp=head;
	while(temp!=NULL)
	{
		printf("%d->",temp->data);
		temp=temp->next;
	}
	printf("\n");
}



Node *create(int val)
{
	Node *newnode;
	newnode=(Node *)malloc(sizeof(Node));
	newnode->next=NULL;
	newnode->data=val;
	return newnode;
}

Node *insert_first(Node *head,int val)
{
	Node *newnode;
	if(head==NULL)
		return create(val);
	else
	{
		newnode=(Node *)malloc(sizeof(Node));
		newnode->data=val;
		newnode->next=head;
		head=newnode;
	}
	return head;
}

Node *insert_last(Node *head,int val)
{
	Node *temp=head;
	Node *newnode;
	while(temp->next!=NULL)
	{
		temp=temp->next;
	}
	newnode=(Node *)malloc(sizeof(Node));
	newnode->next=NULL;
	newnode->data=val;
	temp->next=newnode;
	return head;
}

Node *insert_at_pos(Node *head,int val,int pos)
{
	Node *newnode;
	Node *temp=head;
	Node *temp1=temp->next;
	if(head==NULL)
		return create(val);
	else if(pos==0)
		return insert_first(head,val);
	else if(pos==length(head)-1)
		return insert_last(head,val);
	else
	{
		for(int i=0;i<pos-1;i++)
		{
			temp=temp->next;
			temp1=temp1->next;
		}
		newnode=(Node *)malloc(sizeof(Node));
		newnode->data=val;
		newnode->next=temp1;
		temp->next=newnode;
	}
	return head;
}









