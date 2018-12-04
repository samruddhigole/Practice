#include<stdio.h>

int length(Node *head)
{
	Node *temp;
	temp=head;
	int count=0;
	while(temp!=NULL)
	{
		count++;
		temp=temp->next;
	}
	return count;
}
