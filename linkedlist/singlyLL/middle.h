#include<stdio.h>

int middle(Node *head)
{
	Node *temp=head;
	for(int i=0;i<length(head)/2;i++)
	{
		temp=temp->next;
	}
	return temp->data;
}
