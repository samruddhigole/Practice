#include<stdio.h>

Node *reverse_LL(Node *head)
{
    Node *nextnode=NULL;
    Node *temp=NULL;
    while(head)
    {
        nextnode=head->next;
        
        head->next=temp;
        temp=head;
        head=nextnode;
    }
return temp;
    
}