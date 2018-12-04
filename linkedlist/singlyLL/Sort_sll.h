#include<stdio.h>

Node *sort_sll(Node *head)
{
    Node *temp=head;
    Node *temp1=temp->next;
    int var;
    while(temp1->next!=NULL)
    {
        if(temp->data<temp1->next)
        {
            temp=temp->next;
            temp1=temp1->next;
        }
        else if (temp->data>temp1->data)
        {
            var=temp->data;
            temp->data=temp1->data;
            temp1->data=var;
        }
    }
    return head;

}
