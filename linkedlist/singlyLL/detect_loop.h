#include<stdio.h>
int detect_loop(Node *head)
{
	Node *slow_ptr=head;
	Node *fast_ptr=head;
	
	while(slow_ptr && fast_ptr && fast_ptr->next)
	{
		slow_ptr=slow_ptr->next;
		fast_ptr=fast_ptr->next->next;
	
	if(slow_ptr==fast_ptr)
	{
		printf("loop found");
		return 1;
	}
	}
	return 0;
}
