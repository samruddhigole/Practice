#include<stdio.h>

int Nth_Node_from_last(Node *head,int NthNode)
{
    Node *PTemp=head;
    Node *PNthTemp=head;
    for(int var=0;var<NthNode;var++)
    {
        if(PTemp)
        {
            PTemp=PTemp->next;
        }
    }
    
    while(PTemp)
    {
        if(PNthTemp==NULL)
            PNthTemp=head;
        else
            PNthTemp=PNthTemp->next;
        PTemp=PTemp->next;
    }
    if(PNthTemp)
    {
        return PNthTemp->data;
    }
    return NULL;
}

