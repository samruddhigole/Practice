#include<stdio.h>



Node *middle_of_sll(Node *head)
{
	Node *ptr1=head;
	Node *ptr2=head;
	int i=0;
	while(ptr2->next!=NULL)
	{
		if(i==0)
		{
			ptr2=ptr2->next;
			i=1;
		}
		else if(i==1)
		{
			ptr1=ptr1->next;
			
			ptr2=ptr2->next;
			i=0;
		}
	}
	return ptr1;
}
