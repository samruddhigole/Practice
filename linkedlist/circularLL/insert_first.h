
#include<stdio.h>
#include<stdlib.h>


Node *insert_first(Node *head,int val)
{
	Node *nn,*temp1;
	Node *temp=head;
	while(temp->next!=head)
	{
		temp=temp->next;
	}
	temp1=temp->next;
	nn=(Node *)malloc(sizeof(Node));
	nn->data=val;
	nn->next=temp1;
	temp->next=nn;
	nn=head;
	return head;
}
		
