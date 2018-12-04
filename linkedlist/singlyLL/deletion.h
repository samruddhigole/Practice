#include<stdio.h>
#include<stdlib.h>

Node *del_first(Node *head)
{
	Node *temp;
	temp=head;
	Node *temp1=temp->next;
	free(temp);
	head=temp1;
	return head;
}


Node *del_last(Node *head)
{
	Node *temp=head;
	Node *temp1=temp->next;
	while(temp1->next!=NULL)
	{
		temp1=temp1->next;
		temp=temp->next;
	}
	free(temp1);
	temp->next=NULL;
	return head;
}

Node *del_at_position(Node *head,int pos)
{
	Node *temp=head;
	Node *temp1=temp->next;
	Node *temp2=temp1->next;
	for(int i=0;i<pos-1;i++)
	{
		temp=temp->next;
		temp1=temp1->next;
		temp2=temp2->next;	
	}
	free(temp1);
	temp->next=temp2;
	return head;
}
	
