#include<stdio.h>

void display(Node *head)
{
	Node *temp;
	while(temp!=NULL)
	{
		printf("%d->",temp->data);
		temp=temp->next;
	}
//	printf("\n");
}
