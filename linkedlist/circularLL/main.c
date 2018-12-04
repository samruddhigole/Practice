#include"create.h"
#include"insert_first.h"
#include"display.h"

int main()
{
	Node *head=NULL;
	head=create(100);
	head=insert_first(head,200);
	display(head);
	return 0;
}
