#include<stdio.h>

void display(Node *head)
{
	Node *temp,*temp1;
	temp=head;
	temp1=head;
	while(temp1->next!=temp)
	{
		printf("%d->",temp1->data);
		temp1=temp1->next;
	}
}
