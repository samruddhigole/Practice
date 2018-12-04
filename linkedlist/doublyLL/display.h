#include<stdio.h>

void display(Node *head)
{
	Node *temp;
	temp=head;
	while(temp!=NULL)
	{
		printf("<-%d->",temp->data);
		temp=temp->next;
	}
	printf("\n");
}
