#include<stdio.h>

int starting_point(Node *head)
{
    Node *slow_ptr=head;
    Node *fast_ptr=head;
    int flag;
    while(slow_ptr && fast_ptr && fast_ptr->next)
    {
        if(slow_ptr!=fast_ptr)
        {
            slow_ptr=slow_ptr->next;
            fast_ptr=fast_ptr->next->next;
        }
        else
        {
            flag=1;
            return flag;
        }
    }
    if(flag)
    {
        slow_ptr=head;
        while(slow_ptr!=fast_ptr)
        {
            slow_ptr=slow_ptr->next;
            fast_ptr=fast_ptr->next;
        }
        return slow_ptr;
    }    
    return NULL;
}
