#include<stdio.h>
#include"insertion.h"
#include"length.h"
#include"deletion.h"


int main()
{
        Node *head=NULL;
        head=create(100);
        display(head);
        head=insert_first(head,200);
        head=insert_first(head,600);
        head=insert_first(head,700);
        head=insert_first(head,800);
        display(head);
        head=insert_last(head,500);
        display(head);
	head=insert_at_pos(head,2,4);
	display(head);
	head=del_first(head);
	display(head);
	head=del_last(head);
	display(head);
	head=del_at_position(head,3);
	display(head);
        return 0;
}

