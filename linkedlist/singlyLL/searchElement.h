#include<stdio.h>
#include<stdbool.h>

bool search(Node *head,int key)
{
	Node *temp;
	temp=head;
	while(temp!=NULL)
	{
		if(temp->data==key)
			return true; 
		temp=temp->next;
	}
	return false;
	
}

