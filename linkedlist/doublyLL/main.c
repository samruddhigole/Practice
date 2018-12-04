#include<stdio.h>
#include"insertion.h"
#include"display.h"
#include"length.h"
#include"deletion.h"
int main()
{
	Node *head=NULL;
	head=create(200);
	display(head);
	head=insert_first(head,100);
	display(head);
	head=insert_last(head,400);
	display(head);
	head=insert_at_pos(head,300,2);
	display(head);
	head=insert_in_sorted_LL(head,250);
	display(head);
//	head=delete_first(head);
//	display(head);
//	head=delete_last(head);
//	display(head);

	return 0;
}
