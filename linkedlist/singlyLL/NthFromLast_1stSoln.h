#include<stdio.h>


int Nth_node_last(Node *head,int N)
{
	Node *temp=head;
	for(int i=0;i<length(head)-N;i++)
	{
		temp=temp->next;
	}
	return temp->data;
}
