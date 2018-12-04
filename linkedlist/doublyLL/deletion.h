#include<stdio.h>
#include<stdlib.h>

Node *delete_first(Node *head)
{
	Node *temp=head;
	Node *temp1=temp->next;
	free(temp);
	head=temp1;
	return head;
}


Node *delete_last(Node *head)
{
	Node *temp=head;
	Node *temp1=temp->next;
	if(head==NULL)
		return printf("list is empty");
	else
	{
		while(temp1->next!=NULL)
		{
			temp=temp->next;
			temp1=temp1->next;
		}
		free(temp1);
		temp->next=NULL;
	}
	return head;
}
