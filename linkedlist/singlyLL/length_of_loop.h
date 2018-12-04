#include<stdio.h>

int count_loop_len(Node *temp)
{

	int count=1;
	Node *node=temp;
	while(node->next!=temp)
	{
		node=node->next;
		count+=1;
	}	
	return count;
}

int detect_loop1(Node *head)
{
	Node *temp=head;
	Node *temp1=head;
	while(temp && temp1 && temp1->next)
	{
		temp=temp->next;
		temp1=temp1->next;
		if(temp==temp1)
			return count_loop_len(temp);
	}
	return 0;
}

