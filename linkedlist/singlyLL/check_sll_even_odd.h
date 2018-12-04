#include<stdio.h>

Node *check_even_odd(Node *head)
{
	Node *ptr1;
	while(ptr1->next && ptr1)
	{
		ptr1=ptr1->next->next;
	}
	if(ptr1)
		return printf("length of sll is even");
	else
		return printf("length of sll is odd");
}
