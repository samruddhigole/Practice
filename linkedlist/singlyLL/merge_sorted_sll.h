#include<stdio.h>



Node *merge_2_sll(Node *head1,Node *head2)
{
    Node *current1 = head1;
    Node *current2 = head2;
    Node *next1=head1->next;
    Node *next2=head2->next;

    while(next1 && next2)
    {
        if(current2->data>current1->data && current2->data<next1->data)
        {
            next2=current2->next;
            current2->next=next1;
            current1->next=current2;
            current1=current2;
	    current2=next2;

        }
        else
        {
            if(next1->next)
            {
                next1=next1->next;
                current1=current1->next;
            }
            else
            {
                next1->next=current2;
                return head1;
            }
        }
    }
    return head1;

}

Node *mergeSortedSll(Node *head1,Node *head2)
{
    if(head1->data<head2->data)
         return merge_2_sll(head1,head2);
    else
         return merge_2_sll(head2,head1);
}
