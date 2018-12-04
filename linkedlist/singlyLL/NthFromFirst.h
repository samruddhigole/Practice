#include<stdio.h>
#include<stdbool.h>

 Nth_Node(Node *head,int N)
{
	Node *temp;
	temp=head;
	int count;
	while(temp!=NULL)
	{
		if(count==N)
			return temp->data;
		count++;
		temp=temp->next;
	}
	return printf("invalid position");
}
