#include<stdio.h>

int count_of_N(Node *head,int N)
{
	Node *temp=head;
	int count=0;
	while(temp!=NULL)
	{
		if(temp->data==N)
			count++;
		temp=temp->next;
	}
	return count;
}
